#include "miLista.h"

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento)
{
  //Comprueba que el puntero de la lista y del elemento sean validos y que la lista no este vacia
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
    //Retorna el puntero de siguiente del elmento pasado como parametro
    return elemento->siguiente;

  }
  return NULL;
}
