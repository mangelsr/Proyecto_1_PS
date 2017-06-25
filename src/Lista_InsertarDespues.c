#include "miLista.h"

int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento);

int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento)
{
  if (  (lista!=NULL) && (elemento!=NULL) && (objeto!=NULL) && (lista->numeroElementos!=0)  )
  {
    if((long)objeto==(long)elemento->objeto)
      return 0;

    ElementoLista *eItr = (ElementoLista*)malloc(sizeof(ElementoLista));
    ElementoLista *nuevo = (ElementoLista*)malloc(sizeof(ElementoLista));

    eItr = elemento;
    ElementoLista *oldSiguiente = (ElementoLista *)malloc(sizeof(ElementoLista));
    	
    nuevo->objeto = objeto;

    oldSiguiente = eItr->siguiente;

    eItr->siguiente = nuevo;
    nuevo->anterior = eItr;

    oldSiguiente->anterior = nuevo;
    nuevo->siguiente = oldSiguiente;

    lista->numeroElementos += 1;

    return 0;
  }
  return -1;

}
