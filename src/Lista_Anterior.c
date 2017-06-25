#include "miLista.h"

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento)
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
    eItr = Lista_Primero(lista);
    if(eItr == elemento)
      //Retorna null si se intenta obtener el alnterior del primer elemento
      return NULL;
    //Retorna el puntero de anterior del elmento pasado como parametro  
    return elemento->anterior;
  }
  return NULL;
}