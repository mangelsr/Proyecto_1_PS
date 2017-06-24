#include "miLista.h"

int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento);

int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento)
{
	/*
  if ((lista!=NULL)&&(elemento!=NULL))
  {
    ElementoLista *primero = (ElementoLista*)malloc(sizeof(ElementoLista));
    ultimo = Lista_Primero(lista);
    if(ultimo == elemento)
      Lista_InsertarInicio(lista,elemento->objeto);

    ElementoLista *ultimo = Lista_Ultimo(lista);
    while (ultimo != primero){
      if (ultimo == elemento)
        return elemento->anterior;
      ultimo = ultimo->anterior;
    }
  }
  */
  return 0;
}
