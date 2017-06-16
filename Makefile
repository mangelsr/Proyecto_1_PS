prueba: pruebaLista libreria
	gcc -Wall -Llib/ -Iinclude/ obj/prueba.o -lmilista -o bin/prueba

pruebaLista: src/pruebaLista.c
	gcc -Wall -Iinclude/ -c src/pruebaLista.c -o obj/prueba.o

libreria: objects
	gcc -Wall -shared -fPIC obj/Lista*.o -o lib/libmilista.so
	#LD_LIBRARY_PATH=./lib
	#export LD_LIBRARY_PATH

objects:
	gcc -Wall -fPIC -c -Iinclude/ src/Lista*.c
	mv -f *.o obj/

.PHONY: clean
clean:
	rm -f lib/*.so obj/*.o bin/*
