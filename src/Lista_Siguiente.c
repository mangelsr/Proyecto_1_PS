#include "miLista.h"

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
  if ((lista!=NULL)&&(elemento!=NULL))
    return elemento->siguiente;
  else
    return NULL;
}
