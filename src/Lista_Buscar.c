#include "miLista.h"
#include <stdlib.h>

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto);

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto)
{
  //Condiciones para entrar al algoritmo
  if (  (lista!=NULL) && (lista->numeroElementos!=0) )
  {
    //Para facilitar la busqueda    
    ElementoLista *temp = Lista_Primero(lista);
    ElementoLista *ultimo = Lista_Ultimo(lista);

    
    //El ultimo se compara primero, para no recorrer la lista de manera innecesaria
    if ( ultimo->objeto == objeto )
      return ultimo;

    while(temp != ultimo) 
    {
      //Se recorre la lista
      if ( temp->objeto == objeto)
        return temp;
      
      temp = temp->siguiente;   
    }


  }
return NULL;
}