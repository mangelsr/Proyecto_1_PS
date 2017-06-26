#include "miLista.h"
#include <stdlib.h>

ElementoLista *Lista_Ultimo(ListaEnlazada *lista);

ElementoLista *Lista_Ultimo(ListaEnlazada *lista){
  if (lista != NULL)
  {
  	int numeroElementos = Lista_Conteo(lista);
  	if (numeroElementos > 0)
    {
    //Si hay un elemento a parte del ancla, ese elemento es primero y ultimo de la lista 
    //Si hay más de un elemento, entonces el ANTERIOR AL ANCLA es el ultimo de la lista
      return lista->ancla.anterior;
    }
    return &(lista->ancla);
  }
  return NULL;
}
