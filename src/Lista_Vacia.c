#include "miLista.h"

int Lista_Vacia(ListaEnlazada *lista);

int Lista_Vacia(ListaEnlazada *lista){
	if (lista != NULL)
		return (lista->numeroElementos==0);
	else
		return -1;
}
