#include "miLista.h"

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento);

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento)
{
  if ( (lista!=NULL) && (elemento!=NULL) && (lista->numeroElementos!=0) )
  {
    int numeroElementos = Lista_Conteo(lista);
    ElementoLista *ancla = &(lista->ancla);
    ElementoLista *primero = Lista_Primero(lista);
    if(numeroElementos==1)
    {
      if ( (long)primero->objeto == (long)elemento->objeto )
      {  
         ancla->siguiente = ancla;
         ancla->anterior = ancla;

         lista->numeroElementos = 0;
      }
    }
    if(numeroElementos>1)
    {
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
        }
        primero = primero->siguiente;
      }
    }
  }
  return;
}