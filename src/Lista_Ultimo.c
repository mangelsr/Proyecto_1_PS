#include "miLista.h"

ElementoLista *Lista_Ultimo(ListaEnlazada *lista);

ElementoLista *Lista_Ultimo(ListaEnlazada *lista){
  if (lista != NULL)
		return lista->ancla->anterior;
	else //PREGUNTAR QUE RETORNA SI LA LISTA NO EXISTE
		return NULL;
}
