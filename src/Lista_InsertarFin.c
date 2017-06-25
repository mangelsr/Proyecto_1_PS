#include "miLista.h"

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto);

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto)
{
  //Se comprueba que el puntero de la lista sea valido
  if (lista != NULL)
  {
    //Se obtiene el numero de elementos
    int numeroElementos = Lista_Conteo(lista);
    ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
    
    //Se comprueba que el puntero del nuevo elemetoLista sea valido
    if (nuevo==NULL)
      return -1;

    //Se asigna el objeto al objeto del nuevo elemento
    nuevo->objeto = objeto;

    //Se comprueba si la lista esta vacia
    if (numeroElementos == 0)
    {
      //Se asignan referencias al nuevo
      nuevo->siguiente = &(lista->ancla);
      nuevo->anterior = &(lista->ancla);
      
      //Se cambian las referencias del ancla
      lista->ancla.siguiente = nuevo;
      lista->ancla.anterior = nuevo;

    }else
    {
      ElementoLista *ultimo = Lista_Ultimo(lista);

      //Se asignan las referencias al nuevo
      nuevo->siguiente = &(lista->ancla);
      nuevo->anterior = ultimo;
      
      //Se cambian las referencias de: anterior de ancla y siguiente de ultimo 
      ultimo->siguiente = nuevo;
      lista->ancla.anterior = nuevo;
    }

    //Se incrementan el nuemro de elementos de la lista
    lista->numeroElementos += 1;
    return 0;

  }
  else
    return -1;
}
