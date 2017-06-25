#include "miLista.h"

int Lista_Conteo(ListaEnlazada *lista);

int Lista_Conteo(ListaEnlazada *lista){
	//Se valida que la lista sea un puntero valido
	if (lista != NULL)
		//Se retorna el numero de elementos de esa lista
		return lista->numeroElementos;
	return -1;
}