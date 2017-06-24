
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "miLista.h"

void ImprimirLista(ListaEnlazada *lista, int numeroElementos){

  if (Lista_Conteo(lista) != numeroElementos){
    printf("ImprimirLista: Error. Numero de elementos en lista incorrecto\n");
    exit(-1);
  }

  ElementoLista *elem = NULL;

  for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)) 
  {
    printf("%lu\n", (long)elem->objeto);
  }
//
  printf("Num Elementos: %i\n",lista->numeroElementos);//BORRAR
}

/*Llena la lista*/
void LlenarLista(ListaEnlazada *lista, int numeroElementos)
{
  long i = 0;

  for (i = 0; i < numeroElementos; i++)
  {
//
  printf("  %li  ",i);//BORRAR!!!
  Lista_InsertarFin(lista, (void *)i);    
  }
//
  printf("\n\n");//BORRAR!!!
}

/*Devuelve numero aleatorio de entre 0 y numeroElementos - 1*/
long IndiceAleatorio(int numeroElementos)
{
  srand(time(NULL));
  long r = (rand() % numeroElementos);

  return r;
}

/*Baraja los elementos de la lista*/
int BarajarLista(ListaEnlazada *lista, int numeroElementos)
{

  int i = 0;

  ElementoLista *elem = NULL;
  ListaEnlazada lista_tmp;

  memset(&lista_tmp, 0, sizeof(ListaEnlazada));
  Lista_Inicializar(&lista_tmp);

  //Buscar elemento, sacarlo de lista, ponerla en lista_tmp
  int elementos_en_lista;

  printf("BarajarLista: Barajando la lista...\n");

  for (i = 0; i < numeroElementos; i++)
  {
    printf("%i\n",i);
    int j = 0;
    long indiceAleatorio = 0;

    elementos_en_lista = numeroElementos - i;

    /*Obtenemos indice aleatorio*/
    indiceAleatorio = IndiceAleatorio(elementos_en_lista);

    elem = Lista_Primero(lista);
    printf("%lu\n", (long)elem->objeto);
    printf("assert\n");
    assert(elem != NULL);

    /*Buscamos un elemento a sacar de la lista*/
    for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)) 
    {

      if (j == indiceAleatorio) {
#ifdef IMPRIMIR_LISTA
        printf("%lu\n", (long)elem->objeto);
#endif
        break;
      }

      j++;
    }

    if (elem == NULL){
      /*No encontramos el valor (o Buscar esta mal implementada)*/
      fprintf(stderr, "BarajarLista: Error critico en BarajarLista (linea %d)\n", __LINE__);
      exit(-1);
    }

    //Sacamos el elemeno de la lista
    void *objeto = NULL;
    objeto = elem->objeto;
    printf("objeto = elem->objeto;");

    Lista_Sacar(lista, elem);
    free(elem);
    Lista_InsertarFin(&lista_tmp, objeto);
  }

  /*Aqui lista debe estar vacia...*/
  if (!Lista_Vacia(lista)){
    /*No encontramos el valor (o Buscar esta mal implementada)*/
    fprintf(stderr, "BarajarLista: Error critico, lista no esta vacia (linea %d)\n", __LINE__);
    exit(-1);
  }

  /*lista_tmp contiene elementos insertados de manera aleatoria, reinsertamos en lista*/
  for (elem = Lista_Primero(&lista_tmp); elem != NULL; elem = Lista_Siguiente(&lista_tmp, elem)) {
    Lista_InsertarFin(lista, elem->objeto);
  }

  Lista_SacarTodos(&lista_tmp);

  /**/
  if (!Lista_Vacia(&lista_tmp)){
    /*No encontramos el valor (o Buscar esta mal implementada)*/
    fprintf(stderr, "BarajarLista: Error critico, lista_tmp no esta vacia (linea %d)\n", __LINE__);
    exit(-1);
  }

  printf("BarajarLista: lista barajada exitosamente\n");
  return 0;
}


void RealizarPruebas(int numeroElementos)
{
  /*Creamos una lista*/
  ListaEnlazada lista, lista2, lista3, listaPares;

  /*Inicializamos las listas*/
  memset(&lista, 0, sizeof(ListaEnlazada));
  Lista_Inicializar(&lista);

  memset(&lista2, 0, sizeof(ListaEnlazada));
  Lista_Inicializar(&lista2);

  memset(&lista3, 0, sizeof(ListaEnlazada));
  Lista_Inicializar(&lista3);

  memset(&listaPares, 0, sizeof(ListaEnlazada));
  Lista_Inicializar(&listaPares);

  /*gLista_InsertarFin(&lista, (void*)2);
  Lista_InsertarFin(&lista, (void*)9);
  Lista_InsertarFin(&lista, (void*)5);
  Lista_InsertarFin(&lista, (void*)4);
  Lista_InsertarFin(&lista, (void*)3);
  Lista_InsertarFin(&lista, (void*)6);
  Lista_InsertarFin(&lista, (void*)0);
Lista_InsertarFin(&lista, (void*)8);
  Lista_InsertarFin(&lista, (void*)1);
  Lista_InsertarFin(&lista, (void*)7);
  OrdenarLista(&lista);
  exit(0);*/

  /*Llenamos la lista*/
  LlenarLista(&lista, numeroElementos);
//


//««/////////////////////////////////////////////////////////////////////////////////
  ImprimirLista(&lista,numeroElementos);//BORRAR
  printf("vacio?: %i\n",Lista_Vacia(&lista)==0);
//  printf("23<24: %i\n",23<24);
//  ElementoLista* eSacar = (ElementoLista*)malloc(sizeof(ElementoLista));
  
  //long* ls = (long *)malloc(sizeof(long));
//  long ls = 0;
  
//  eSacar->objeto = (void *)ls;
  //Lista_Sacar(&lista,eSacar);
//  Lista_SacarTodos(&lista);
//  printf("todos fuera\n");
  
//  ImprimirLista(&lista,0);//BORRAR
//  printf("vacio?: %i\n",Lista_Vacia(&lista)==0);
///////////////////////////////////////////////////////////////////////////////////»»


  /*Barajar los elementos dentro de la lista*/
  BarajarLista(&lista, numeroElementos);

  /*Buscar todos en lista*/
//  BuscarTodosEnLista(&lista, numeroElementos);

  /*Copiar lista prueba*/
//  CopiarListaHaciaAdelante(&lista, &lista2);
//  CopiarListaHaciaAtras(&lista, &lista3);
//  CopiarListaPares(&lista, &listaPares);

  /*Finalemente ordenamos la lista*/
//  OrdenarListaAscendente(&lista);

  return;
}

int main(int argc, char *argv[])
{

  if (argc < 2){
    fprintf(stderr, "Por favor ingrese el numero de elementos como argumento ej.: ./prueba 1234");
    exit(-1);
  }

  int elementos = atoi(argv[1]);
  RealizarPruebas(elementos);

  return 0;
}