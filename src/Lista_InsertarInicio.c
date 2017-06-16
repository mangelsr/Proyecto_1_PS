#include "miLista.h"

int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto);

int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto){
  if (lista != NULL){
	ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
	ElementoLista *ultimo = Lista_Ultimo(lista);
  nuevo->objeto = objeto;
	nuevo->siguiente = &(lista->ancla);
	nuevo->anterior = ultimo;
	lista->ancla.anterior = nuevo;
	ultimo->siguiente = nuevo;
	lista->ancla = *nuevo;
	return 1;
  }
  else
  	return -1;
}
