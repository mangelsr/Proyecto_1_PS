#include "miLista.h"

void Lista_SacarTodos(ListaEnlazada *lista);

void Lista_SacarTodos(ListaEnlazada *lista)
{
  if ( (lista!=NULL) && (lista->numeroElementos!=0) )
  {

    int numeroElementos = Lista_Conteo(lista);
    ElementoLista *ancla = &(lista->ancla);
    ElementoLista *primero = Lista_Primero(lista);

    if(numeroElementos==1)
    {
         ancla->siguiente = ancla;
         ancla->anterior = ancla;
    }

    if(numeroElementos>1)
    {
      ElementoLista *eAnterior = (ElementoLista *)malloc(sizeof(ElementoLista));
      //Si la lista esta vacía, entonces primero es igual a ultimo
      
      while (primero != ancla)
      {
        //obtengo los elementos anterior y siguiente al elemento que estoy iterando
        eAnterior = primero->anterior;
        if(eAnterior != ancla)  
        {
          //elemino las referencias del elemento a sacar
          eAnterior->objeto = NULL;
          eAnterior->siguiente = NULL;
          eAnterior->anterior = NULL;  
        }
        primero = primero->siguiente;
      }

    }
    lista->numeroElementos = 0;
  }
  
  return;

}
