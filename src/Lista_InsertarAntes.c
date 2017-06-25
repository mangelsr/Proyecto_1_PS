#include "miLista.h"

int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento);

int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento)
{
  if (  (lista!=NULL) && (elemento!=NULL) && (objeto!=NULL) && (lista->numeroElementos!=0) )
  {
    if((long)objeto==(long)elemento->objeto)
      return 0;

    ElementoLista *eItr = (ElementoLista*)malloc(sizeof(ElementoLista));
    ElementoLista *nuevo = (ElementoLista*)malloc(sizeof(ElementoLista));

    eItr = elemento;
    ElementoLista *oldAnterior = (ElementoLista *)malloc(sizeof(ElementoLista));

    nuevo->objeto = objeto;

    oldAnterior = eItr->anterior;

    eItr->anterior = nuevo;
    nuevo->siguiente = eItr;

    oldAnterior->siguiente = nuevo;
    nuevo->anterior = oldAnterior;

    lista->numeroElementos += 1;
    
    return 0;
  }
  return -1;
}
