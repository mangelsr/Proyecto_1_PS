#include "miLista.h"

int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto);

int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto){
  if (lista != NULL){
	ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
	ElementoLista *ultimo = Lista_Ultimo(lista);
	ElementoLista *primero = Lista_Primero(lista); //ANCLA
	if (nuevo==NULL)
		return -1;
	nuevo->objeto = objeto;
	if (lista->ancla.siguiente==NULL && lista->ancla.anterior==NULL){
		nuevo->siguiente = nuevo;
		nuevo->anterior = nuevo;
		lista->ancla = *nuevo;
	}else{
		nuevo->siguiente = primero;
		nuevo->anterior = ultimo;
		ultimo->siguiente = nuevo;
		primero->anterior = nuevo;
		lista->ancla = *nuevo;
	}
	lista->numeroElementos += 1;
	return 0;
  }
  else
  	return -1;
}
