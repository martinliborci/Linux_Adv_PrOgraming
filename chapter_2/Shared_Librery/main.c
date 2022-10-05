#include <stdio.h>
#include "test.h"

int main ()
{
	int num;
	num=f();
	printf("%d\n",num );
	return 0;
}

/*
Para linkear una libreria estatica:
	hacer los .o de los test, siempre con la opcion -c del gcc
		gcc -c test.c
		gcc -c test2.c
	crear la libreria estatica
		ar cr libtest.a test.o test2.o
	crear el .o del archivo que usarà la libreria
		gcc -c  main.c -o app.o
	linkear el archivo con la librerìa, para obtener el ejecutable
		gcc -o app app.o -L. -ltest
		-L. indica que se busca la libreria en el directorio actual
	IMPORTANTE: EL orden influye, ya que el linker primero debe tener las referencias para poder reemplazarlas luego!
	No funciona el siguiente comando:
		gcc -o main.c -L. -ltest app.o
	porque primero se crea el app.o, y el linker no encuentra la referencia a f() en la lireria libtest.a. 
*/