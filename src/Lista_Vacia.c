#include "miLista.h"

int Lista_Vacia(ListaEnlazada *lista);

int Lista_Vacia(ListaEnlazada *lista){
	if (lista != NULL)
	{
		int n = lista->numeroElementos;
		printf("%i\n",n);
		return (n > 0);
	}
	else
		return -1;
}
