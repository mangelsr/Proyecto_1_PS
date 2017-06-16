#include "miLista.h"

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
  /*if ((lista!=NULL)&&(elemento!=NULL)){
    ElementoLista pivote = lista->ancla.siguiente;
    while(pivote != lista->ancla){
      if (pivote == elemento)
        return elemento->anterior;
      pivote = pivote->siguiente;
    return NULL;
    }
  }
  else
    return NULL;*/
  if ((lista!=NULL)&&(elemento!=NULL))
    return elemento->anterior;
  else
    return NULL;
}
