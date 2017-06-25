#include "miLista.h"

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento)
{
  if ( (lista!=NULL) && (elemento!=NULL) && (lista->numeroElementos!=0) )
  {
    /*
    int numeroElementos = lista->numeroElementos;
    if((long)elemento->objeto > (long) numeroElementos)
      return NULL;
    */
    ElementoLista *eItr = (ElementoLista*)malloc(sizeof(ElementoLista));
    eItr = Lista_Primero(lista);
    if(eItr == elemento)
      return NULL;

    return elemento->anterior;
  }
  return NULL;
}