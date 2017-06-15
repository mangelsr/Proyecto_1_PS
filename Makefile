prueba: pruebaLista libreria
	gcc -Wall -llib/ -Iinclude/ src/pruebaLista.c -milista -o bin/prueba

pruebaLista: src/pruebaLista.c
	gcc -Wall -c src/pruebaLista.c -o obj/prueba.o

libreria: objects


objects:
	gcc -Wall -c src/Lista*.c -o obj/Lista*.o

.PHONY: clean
clean:
	rm -f lib/*.so obj/*.o bin/*
