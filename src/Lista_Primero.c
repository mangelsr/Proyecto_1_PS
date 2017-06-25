#include "miLista.h"

ElementoLista *Lista_Primero(ListaEnlazada *lista);

ElementoLista *Lista_Primero(ListaEnlazada *lista){
  //Comprueba que el puntero de la lista sea valido
  if (lista != NULL)
  {
    //Obtiene el numero de elementos de la lista
  	int numeroElementos = Lista_Conteo(lista);
  	if (numeroElementos > 0)
    {
    //ElementoLista ultimo = (lista->ancla).anterior;
      //Retorno el puntero de siguiente del ancla de la lista 
      return lista->ancla.siguiente;
    }
  }
  return NULL;
}
