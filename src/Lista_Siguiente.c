#include "miLista.h"
#include <stdlib.h>

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento)
{
  //Comprueba que el puntero de la lista y del elemento sean validos y que la lista no este vacia
  if ( (lista!=NULL) && (elemento!=NULL) && (lista->numeroElementos!=0) )
  {
    //ElementoLista *temp = Lista_Buscar(lista,elemento->objeto);
    ElementoLista *temp =(ElementoLista*)malloc(sizeof(ElementoLista));
    //if( temp != NULL )
    //{
      temp = Lista_Ultimo(lista);
      if(temp == elemento)
        //Si intenta obtener el siguiente del ultimo elemento
        return NULL;
      //Retorna el puntero *siguiente del elemento
      return elemento->siguiente;
    //}
  }
  return NULL;
}
/*Por alguna razon el metodo buscar que fue probado, en otros archivos.c de prueba
 *y que funciona para las funciones del archivo diferentes a copiarPares, si retorna 
 *Null al no encontrar un elemento con el objeto enviado como parametro, hace que la
 *funcion CopiarPares no funcione( Si se valida en esta funcion Lista_Siguiente ), 
 *encuentra el primer par, y a partir de ahi sale en la siguiente iteracion despues 
 *de eliminar el primer elemento impar
 *
 *SOLUCION: Por alguna razon si retorno el ultimo al no encontrar, todo funciona
 *pero eso anularia las validaciones en las demas funciones, ya que buscar nunca
 *seria NULL
 */