#include <stdio.h>
#include <stdlib.h>

int n_factorial(int numero){
          if (numero <= 0){
                  return 1;
          } else {
                  return numero * n_factorial(numero - 1);
          }
}

		int main (int argc, char **argv[]){
          int n = 0, resultado,i;

          for (i = 1; i < argc; i ++){
                  n = atoi(argv[i]);
                  resultado = n_factorial(n);
                  printf("El factorial del numero %d es %d\n", n, resultado);
          }
            return 0;
}
