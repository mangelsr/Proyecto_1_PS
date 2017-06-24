#include "miLista.h"

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento)
{
  if ((lista!=NULL)&&(elemento!=NULL))
  {
    ElementoLista *primero = (ElementoLista*)malloc(sizeof(ElementoLista));
    primero = Lista_Primero(lista);
    if(primero == elemento)
      return NULL;

    ElementoLista *ultimo = Lista_Ultimo(lista);
    while (ultimo != primero){
      if (ultimo == elemento)
        return elemento->anterior;
      ultimo = ultimo->anterior;
    }
  }
    return NULL;
}