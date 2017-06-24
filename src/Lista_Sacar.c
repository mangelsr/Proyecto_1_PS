#include "miLista.h"

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento);

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento)
{
  if ((lista!=NULL)&&(elemento!=NULL))
  {
    ElementoLista *primero = Lista_Primero(lista);
    ElementoLista *ancla = &(lista->ancla);
    ElementoLista *eSiguiente = (ElementoLista *)malloc(sizeof(ElementoLista));
    ElementoLista *eAnterior = (ElementoLista *)malloc(sizeof(ElementoLista));

    //Si la lista esta vacía, entonces primero es igual a ultimo
    while (primero != ancla)
    {
      //obtengo los elementos anterior y siguiente al elemento que estoy iterando
      eSiguiente = primero->siguiente;
      eAnterior = primero->anterior;
      if ( (long)primero->objeto == (long)elemento->objeto )
      { 
      	//Cambio las referencias de los objetos alrededor del elemento a sacar
      	//en caso de haber solo dos elementos, el siguiente del ancla apuntaría 
      	//al ancla, y el anterior del ancla, apuntaria al ancla
        eSiguiente->anterior = eAnterior;
        eAnterior->siguiente = eSiguiente;
        lista->numeroElementos -= 1;
        
        //elemino las referencias del elemento a sacar
        elemento->objeto = NULL;
        elemento->siguiente = NULL;
        elemento->anterior = NULL;
      }
      primero = primero->siguiente;
    }
    primero = NULL;
    ancla = NULL;
    eSiguiente = NULL;
    eAnterior = NULL;
  }
  return;
}
