#include <stdio.h>


int Longitud(char *cadena) {
  int l=0;

  while (cadena[l] != '\0') {
    l++;
  }

  return l;
}

int nCaracter(char *cadena, char c) {
  int nc=0,  i=0;

  while (cadena[i++] != '\0') {
    if (cadena[i] == c) {
       nc++;
    }
  }

  return nc;
}