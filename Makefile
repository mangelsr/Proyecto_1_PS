prueba: pruebaLista libreria
	gcc -Wall -Llib/ -Iinclude/ obj/prueba.o -lmilista -o bin/prueba
	
prueba1: libreria
	gcc -Wall -Iinclude/ -c -g src/prueba1.c -o obj/prueba1.o
	gcc -Wall -Llib/ -Iinclude/ obj/prueba1.o -lmilista -o bin/prueba1

pruebaLista: src/pruebaLista.c
	gcc -Wall -Iinclude/ -c -g src/pruebaLista.c -o obj/prueba.o

libreria: objects
	gcc -Wall -shared -fPIC obj/Lista*.o -o lib/libmilista.so
	#LD_LIBRARY_PATH=./lib
	#export LD_LIBRARY_PATH

objects:
	gcc -Wall -fPIC -c -g -Iinclude/ src/Lista*.c
	mv -f *.o obj/

.PHONY: clean
clean:
	rm -f lib/*.so obj/*.o bin/*
