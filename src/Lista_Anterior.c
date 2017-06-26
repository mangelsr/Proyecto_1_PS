#include "miLista.h"
#include <stdlib.h>

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento)
{
  //Comprueba que el puntero de la lista y del elemento sean validos y que la lista no este vacia
  if ( (lista!=NULL) && (elemento!=NULL) && (lista->numeroElementos!=0) )
  {
    ElementoLista *temp = Lista_Buscar(lista,elemento->objeto);
    if( temp != NULL )
    {
      temp = Lista_Primero(lista);
      if(temp == elemento)
        //Si intenta obtener el anterior del primer elemento
        return NULL;
      //Retorna el puntero *anterior del elemento
      return elemento->anterior;
    }
  }
  return NULL;
}