#include "miLista.h"
#include <stdio.h>

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto);

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto)
{
  //Condiciones para entrar al algoritmo
  if (  (lista!=NULL) && (lista->numeroElementos!=0) )
  {

    //Se obtiene el tamaño de la lista
  	int n = lista->numeroElementos;
    //Se crean dos punteros a primero y ultimo para facilitar la busqueda
  	ElementoLista *primero = Lista_Primero(lista);
  	ElementoLista *ultimo = Lista_Ultimo(lista);   
  	if(n>0)
  	{
      //Se compara al primero
  	  //if((long)primero->objeto == (long)objeto)
      if(primero->objeto == objeto)
      {
        //Se libera el espacio asignado a la variable que ya no se necesita
        ultimo = NULL;
        free(ultimo);
  	    return primero;
      }
  	}
  	if(n>1)
  	{ //Se compara al ultimo
  	  //if((long)ultimo->objeto == (long)objeto)
      if(ultimo->objeto == objeto)
      {
        //Se libera el espacio asignado a la variable que ya no se necesita
        primero = NULL;
        free(primero);
  	    return ultimo;	
      }
    }
    while (primero != ultimo)
    {
      //Si no se lo ha encontrado antes, se recorre la lista
      //if ((long)primero->objeto == (long)objeto)
      if (primero->objeto == objeto)
      {
        return primero;
      }
      primero = primero->siguiente;
    }
  }
  //En caso de no hallarlo retorna NULL
  return NULL;
}