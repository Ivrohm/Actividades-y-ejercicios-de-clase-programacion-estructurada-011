//1. caso digito //
//2. caso mayusculas//
//3. caso minusculas//
//4. caso caracter//
#include<stdio.h>

int main(){
	char caracter='G';
	int valor_ascii= (int) caracter;
	
	printf("El valor ascii es: %d de %c \n",valor_ascii, caracter);
	if (valor_ascii>= 48 && valor_ascii<=57)
	
		printf("El valor %c es digito",caracter);
		
		else if(valor_ascii >=65 && valor_ascii<=90 )
		
		printf("El valor %c es mayuscula",caracter); 
	
		
		else if(valor_ascii >=97 && valor_ascii <=122)
		
	printf("El valor %c es minuscula",caracter);

else
	printf("\n Caracter Especial");



return 0;


}
