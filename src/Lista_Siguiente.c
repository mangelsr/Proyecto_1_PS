#include "miLista.h"

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento)
{
  if ((lista!=NULL)&&(elemento!=NULL))
  {
    ElementoLista *ultimo = Lista_Ultimo(lista);
    if(ultimo == elemento)
      return NULL;

    ElementoLista *primero = Lista_Primero(lista);
    while (primero != ultimo){ 
      if (primero == elemento)
        return elemento->siguiente;
      primero = primero->siguiente;
    }
  }
  return NULL;
}
