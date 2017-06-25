#include "miLista.h"

void Lista_SacarTodos(ListaEnlazada *lista);

void Lista_SacarTodos(ListaEnlazada *lista)
{
  //Condiciones para entrar al algoritmo
  if ( (lista!=NULL) && (lista->numeroElementos!=0) )
  {
    //Se obtiene el tamaño de la lista
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
          //Se eleminan las referencias del elemento a sacar
          eAnterior->objeto = NULL;
          eAnterior->siguiente = NULL;
          eAnterior->anterior = NULL;  

        }
        //Se mueve el puntero al siguiente elemento
        primero = primero->siguiente;
      }

    }
    //Se actualiza el numero de Elementos
    lista->numeroElementos = 0;
  }
  
  return;

}
