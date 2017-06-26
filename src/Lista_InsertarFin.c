#include "miLista.h"
#include <stdlib.h>

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto);

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto)
{
  //Condiciones para entrar al algoritmo
  if (lista != NULL) 
  {
    //Puntero ElementoLista donde se guardará el nuevo objeto
    ElementoLista *nuevoFin = (ElementoLista *)malloc(sizeof(ElementoLista));

    if(nuevoFin==NULL)
      return -1;

    //Se le asigna el objeto
    nuevoFin->objeto = objeto;
    //Se obtiene el tamaño de la lista
    int numero = lista->numeroElementos;

    if (numero == 0)
    {
      //Se mueven los punteros del nuevoFin
      nuevoFin->siguiente = &(lista->ancla); 
      nuevoFin->anterior = &(lista->ancla);
      //Se mueven los punteros del ancla
      lista->ancla.siguiente = nuevoFin;
      lista->ancla.anterior = nuevoFin;
    }
    if (numero >= 1)
    {
      //Se obtiene el último elemento
      ElementoLista *oldUltimo = Lista_Ultimo(lista);

      //Se mueven los punteros del old Ultimo
      oldUltimo->siguiente = nuevoFin;
      nuevoFin->anterior = oldUltimo;
      //Se mueven los punteros del nuevoFin
      nuevoFin->siguiente = &(lista->ancla);
      //Se mueven los punteros del ancla
      lista->ancla.anterior = nuevoFin;
    }
    //
    //lista->ancla.anterior = nuevoFin;

    //Actualiza número de elementos
    lista->numeroElementos += 1;
    return 1;
  }
return -1; 
}
