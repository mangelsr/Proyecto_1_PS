#include "miLista.h"

int Lista_Inicializar(ListaEnlazada *lista);

int Lista_Inicializar(ListaEnlazada *lista){

	if(lista != NULL)
	{
		lista->numeroElementos = 0;
		ElementoLista *eLista = (ElementoLista *)malloc(sizeof(ElementoLista));
		lista->ancla = *eLista;
		eLista->siguiente = &(lista->ancla);
		eLista->anterior = &(lista->ancla);
		return 0;
	}
	return -1;
}
