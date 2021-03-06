#include "miLista.h"
#include <stdlib.h>

int Lista_Inicializar(ListaEnlazada *lista);

int Lista_Inicializar(ListaEnlazada *lista){

	if(lista != NULL)
	{
		//Se declara e inicializa una estructura ElementoLista
		ElementoLista *eLista = (ElementoLista *)malloc(sizeof(ElementoLista));
		
		//Se asignan los valores o referecias a la estructura eLista
		eLista->objeto = NULL;
		eLista->siguiente = eLista;
		eLista->anterior = eLista;

		//Se guarda la estructura eLista como "ancla" en la lista
		lista->ancla = *eLista;
		lista->numeroElementos = 0;

		return 0;
	}
	return -1;
}
