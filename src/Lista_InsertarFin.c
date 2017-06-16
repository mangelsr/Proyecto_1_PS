#include "miLista.h"

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto);

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto){
  if (lista != NULL){
  	ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
  	ElementoLista *ultimo = Lista_Ultimo(lista);
  	nuevo->objeto = objeto;
  	nuevo->siguiente = &(lista->ancla);
  	lista->ancla.anterior = nuevo;
  	ultimo->siguiente = nuevo;
  	nuevo->anterior = ultimo;
  	return 1;
  }
  else
  	return -1;
}
