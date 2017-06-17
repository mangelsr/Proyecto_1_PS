#include "miLista.h"

int Lista_Conteo(ListaEnlazada *lista);

int Lista_Conteo(ListaEnlazada *lista){
	if (lista != NULL)
		return lista->numeroElementos;
	return -1;
}
