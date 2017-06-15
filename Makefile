prueba: pruebaLista libreria
	gcc -Wall -llib/ -Iinclude/ src/pruebaLista.c -milista -o bin/prueba

pruebaLista: src/pruebaLista.c
	gcc -Wall -Iinclude/ -c src/pruebaLista.c -o obj/prueba.o

libreria: objects
	gcc -Wall -shared -fPIC obj/Lista*.o -o lib/libcifrado.so

objects:
	gcc -Wall -c -Iinclude/ src/*.c
	mv -f *.o obj/


.PHONY: clean
clean:
	rm -f lib/*.so obj/*.o bin/*
