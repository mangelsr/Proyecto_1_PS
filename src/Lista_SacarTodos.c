#include "miLista.h"

void Lista_SacarTodos(ListaEnlazada *lista);

void Lista_SacarTodos(ListaEnlazada *lista){
  if (lista!=NULL)
  {
    ElementoLista *primero = Lista_Primero(lista);
    ElementoLista *ancla = &(lista->ancla);
    ElementoLista *eAnterior = (ElementoLista *)malloc(sizeof(ElementoLista));

    //Si la lista esta vacía, entonces primero es igual a ultimo
    while (primero != ancla)
    {
      //obtengo el anterior al elemento que estoy iterando
        eAnterior = primero->anterior;
        eAnterior->siguiente = NULL;
        eAnterior->anterior = NULL;
        eAnterior->objeto = NULL;
      primero = primero->siguiente;
    }
    lista->numeroElementos = 0;
    ancla->siguiente = ancla;
    ancla->anterior = ancla;

  }
  return;
}
