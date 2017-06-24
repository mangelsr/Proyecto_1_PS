#include "miLista.h"
#include <stdio.h>

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto);

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto)
{
  if (  (lista!=NULL) && (lista->numeroElementos!=0) )
  {
  	int n = lista->numeroElementos;
  	ElementoLista *primero = Lista_Primero(lista);
  	ElementoLista *ultimo = Lista_Ultimo(lista);
  	if(n>0)
  	{
  	  if((long)primero->objeto == (long)objeto)
  	    return primero;
  	}
  	if(n>1)
  	{
  	  if((long)ultimo->objeto == (long)objeto)
  	    return ultimo;	
    }
    while (primero != ultimo)
    {
      if ((long)primero->objeto == (long)objeto)
        return primero;
      primero = primero->siguiente;
    }
  }
  return NULL;
}