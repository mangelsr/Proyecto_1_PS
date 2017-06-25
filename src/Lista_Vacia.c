#include <stdio.h>
#include "miLista.h"

int Lista_Vacia(ListaEnlazada *lista);

int Lista_Vacia(ListaEnlazada *lista){
	//Comprueba que el puntero de lista sea valido
	if (lista != NULL)
	{
		//Almacena en la variable n el numero de elementos de la lista
		int n = lista->numeroElementos;
		//Retorna el valor de verdad de la propocicion n es igual a 0
		return (n == 0);
	}
	else
		return -1;
}
