#include "miLista.h"

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento)
{
  if ( (lista!=NULL) && (elemento!=NULL) && (lista->numeroElementos!=0) )
  {
    /*
    int numeroElementos = lista->numeroElementos;
    if((long)elemento->objeto > (long) numeroElementos)
      return NULL;
    */
    ElementoLista *eItr = (ElementoLista*)malloc(sizeof(ElementoLista));
    eItr = Lista_Ultimo(lista);
    if(eItr == elemento)
      return NULL;

    return elemento->siguiente;

  }
  return NULL;
}
