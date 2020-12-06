#include<stdio.h>
#include<stdlib.h>


int imprime(int *valor_ascii, int *caracter){
	
	printf("El valor ascii es: %d de %c \n",*valor_ascii,*caracter);
	if (*valor_ascii>= 48 && *valor_ascii<=57){
	
	
		printf("El valor %c es digito",*caracter);
		
		}else if(*valor_ascii >=65 && *valor_ascii<=90 ){
		
		
		printf("El valor %c es mayuscula",*caracter); 
	
		
		}else if(*valor_ascii >=97 && *valor_ascii <=122){
		
		
	printf("El valor %c es minuscula",*caracter);

}else
	printf("\n Caracter Especial");

}
int main(int argv, char **argc){
int arreglo[argv];
int i;
char caracter;
int valor_ascii;
 
      for (i = 1; i < argv; i ++){
              caracter = (char) atoi(argc[i]);
              valor_ascii = atoi(argc[i]);
              imprime(&valor_ascii, &caracter);
      }
return 0;
}

