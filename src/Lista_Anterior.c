#include "miLista.h"

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
  if ((lista!=NULL)&&(elemento!=NULL)){
    ElementoLista *primero = Lista_Primero(lista);
    ElementoLista *ultimo = Lista_Ultimo(lista);
    while (primero != ultimo){
      if (primero == elemento)
        return elemento->anterior;
      primero = primero->siguiente;
    }
    return NULL;
  }else
    return NULL;
}