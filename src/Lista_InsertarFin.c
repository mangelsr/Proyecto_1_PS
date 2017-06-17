#include "miLista.h"

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto);

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto){
	if (lista != NULL){
  	ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
  	ElementoLista *ultimo = Lista_Ultimo(lista);
	if (nuevo==NULL)
		return -1;
	nuevo->objeto = objeto;
	if (lista->ancla.siguiente==NULL && lista->ancla.anterior==NULL){
		nuevo->siguiente = nuevo;
		nuevo->anterior = nuevo;
		lista->ancla = *nuevo;
	}else{
		nuevo->siguiente = &(lista->ancla);
		nuevo->anterior = ultimo;
		ultimo->siguiente = nuevo;
		lista->ancla.anterior = nuevo;
	}
	lista->numeroElementos += 1;
	return 0;
  }
  else
  	return -1;
}
