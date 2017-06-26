#include "miLista.h"
#include <stdlib.h>

int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento);

int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento)
{
  //Condiciones para entrar al algoritmo
  if (  (lista!=NULL) && (elemento!=NULL) && (objeto!=NULL) && (lista->numeroElementos!=0) )
  {
    //Se crean dos punteros de ElementoLista para facilitar el redireccionamiento y la 
    //inserción
    ElementoLista *eItr = (ElementoLista*)malloc(sizeof(ElementoLista));
    ElementoLista *nuevo = (ElementoLista*)malloc(sizeof(ElementoLista));

    //Se establecen el elemento y su anterior, en medio de estos es que se insertara,
    //el nuevo elemento
    eItr = elemento;
    ElementoLista *oldAnterior = (ElementoLista *)malloc(sizeof(ElementoLista));


    //Se mueven referencias para insertar sin perder los otros elementos
    nuevo->objeto = objeto;

    oldAnterior = eItr->anterior;

    eItr->anterior = nuevo;
    nuevo->siguiente = eItr;

    oldAnterior->siguiente = nuevo;
    nuevo->anterior = oldAnterior;

    //Se actualiza el numero de elementos de la lista
    lista->numeroElementos += 1;
    
    return 0;
  }
  return -1;
}
