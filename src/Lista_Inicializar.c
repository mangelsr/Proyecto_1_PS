#include "miLista.h"

int Lista_Inicializar(ListaEnlazada *lista);

int Lista_Inicializar(ListaEnlazada *lista){

	if(lista != NULL)
	{
		lista->numeroElementos = 0;
		ElementoLista *eLista = malloc(sizeof(ElementoLista));
		lista->ancla = *eLista;
		lista->ancla->siguiente = lista->ancla;
		lista->ancla->anterior = lista->ancla;
		return 0;
	}
	return -1;
}
