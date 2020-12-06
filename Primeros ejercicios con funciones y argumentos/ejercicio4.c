#include<stdio.h>
#include<stdlib.h>

int multplicacion_ele(int *elementos_maximos){
	int i;
	
      printf("\nserie del 1 al %d es: \n\n", *elementos_maximos);
      for( i = 1; i <=*elementos_maximos; i ++){
      	
              printf("%d, ", i * i);
      }
}

int suma_serie(int *elementos_maximos){
  int total = 0, elem = *elementos_maximos;
      printf("\nLa suma de los cuadrados del 1 al %d es:\n\n", *elementos_maximos);
      total = (elem * (elem + 1) * ( elem * 2 + 1))/6;
    printf("\ntotal suma: %d", &suma_serie);
}

int main (int argv, char **argc){
int i;
  int elementos_maximos;

      for( i = 1; i < argv; i ++){
              elementos_maximos = atoi(argc[i]);
              multplicacion_ele(&elementos_maximos);
              suma_serie(&elementos_maximos);
              
      }

return 0;
}
