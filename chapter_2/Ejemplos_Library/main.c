#include <stdio.h>
#include "Cadenas.h"

int main(int argc, char* argv[]) {

  char Nombre[] = "V�ctor Hugo Dorantes Gonz�lez";
  int l;
    
  l = Longitud(Nombre);

  printf("La longitud de la cadena es %d\n", l);

  l = nCaracteres(Nombre, 'o');

  printf("El caracter %c aparece %d veces en la cadena\n", 'o', l);

  return 0;
}