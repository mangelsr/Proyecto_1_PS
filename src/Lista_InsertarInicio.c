#include "miLista.h"
#include <stdlib.h>

int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto);

int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto)
{
  //Verifica que el puntero de lista sea valido
  if (lista != NULL)
  {
    //Se obitne el numero de elementos que tiene la lista
	  int numeroElementos = Lista_Conteo(lista);
	  ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));

    //Verifica que el puntero del elemento a insertar sea inicializado correctamente
	  if( nuevo == NULL )
		  return -1;

    //Se asgina el valor al objeto del nuevo elementoLista
	  nuevo->objeto = objeto;

    //Se verifica el numero de elementos que tiene la lista
	  if (numeroElementos == 0)
    {
      //Se asginan las referencias al nuevo
      nuevo->siguiente = &(lista->ancla);
      nuevo->anterior = &(lista->ancla);
    
      //Se cambian las referencias del ancla
      lista->ancla.siguiente = nuevo;
      lista->ancla.anterior = nuevo;

    }else
    {
      ElementoLista *primero = Lista_Primero(lista);

      //Se asignan las referencias al nuevo
      nuevo->siguiente = primero;
      nuevo->anterior = &(lista->ancla);
      
      //Se cambian las referencias de: anterior de ancla y siguiente de primero 
      lista->ancla.siguiente = nuevo;
      primero->anterior = nuevo;
      
    }

    //Se incrementan el nuemro de elementos de la lista
    lista->numeroElementos += 1;
    return 0;

  }
  else
    return -1;
}
