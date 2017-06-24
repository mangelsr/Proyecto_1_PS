#include "miLista.h"

int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto);

int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto)
{
  if (lista != NULL)
  {

	int numeroElementos = Lista_Conteo(lista);
	ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));

	if( nuevo == NULL )
		return -1;

	nuevo->objeto = objeto;


	if (numeroElementos == 0)
    {
      nuevo->siguiente = &(lista->ancla);
      nuevo->anterior = &(lista->ancla);
      
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

    lista->numeroElementos += 1;
    return 0;

  }
  else
    return -1;
}
