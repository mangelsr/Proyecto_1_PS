#include "miLista.h"

ElementoLista *Lista_Primero(ListaEnlazada *lista);

ElementoLista *Lista_Primero(ListaEnlazada *lista){
	if (lista != NULL)
		return lista->ancla;
	else //PREGUNTAR QUE RETORNA SI LA LISTA NO EXISTE
		return NULL;
}
