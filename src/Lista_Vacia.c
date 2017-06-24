#include <stdio.h>
#include "miLista.h"

int Lista_Vacia(ListaEnlazada *lista);

int Lista_Vacia(ListaEnlazada *lista){
	if (lista != NULL)
	{
		int n = lista->numeroElementos;
		return (n == 0);
	}
	else
		return -1;
}
