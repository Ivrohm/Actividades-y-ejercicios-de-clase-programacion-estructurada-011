#include<stdio.h>
#include<conio.h>
struct cuadrilatero{
	int fila;
	int colu;
	
};

int main (){
	struct cuadrilatero cuadrilatero1;
	struct cuadrilatero cuadrilatero2;
	char carac = '*', carac2 = '-', carac3 = '+';
	
	cuadrilatero1.colu=15;
	cuadrilatero1.fila=15;
	cuadrilatero2.colu=10;
	cuadrilatero2.fila=5;
	for(cuadrilatero1.fila = 1; cuadrilatero1.fila <=15; cuadrilatero1.fila+=1)
	{
		for (cuadrilatero1.colu = 1; cuadrilatero1.colu <= 15; cuadrilatero1.colu= cuadrilatero1.colu+1){
		if (cuadrilatero1.fila == 1 || cuadrilatero1.fila == 15){
			if(cuadrilatero1.fila==1 && cuadrilatero1.colu ==1 || cuadrilatero1.fila == 1 && cuadrilatero1.colu ==15 || cuadrilatero1.colu ==1 || cuadrilatero1.fila == 15 && cuadrilatero1.colu ==15||cuadrilatero1.fila==1&&cuadrilatero1.colu==1)
			{
				printf("%c", carac3);
			}else {
				printf("%c", carac2);
			}
		}else{
			if(cuadrilatero1.colu == 1 || cuadrilatero1.colu == 15)
			{
				printf("%c", carac);
			}else{
				printf(" ");
			}
		}
		}  printf ("\n");
			}
			
			
		for(cuadrilatero2.fila = 1; cuadrilatero2.fila <=5; cuadrilatero2.fila+=1)
	{
		for (cuadrilatero2.colu = 1; cuadrilatero2.colu <= 10; cuadrilatero2.colu= cuadrilatero2.colu+1){
		if (cuadrilatero2.fila == 1 || cuadrilatero2.fila == 5){
			if(cuadrilatero2.fila==1 && cuadrilatero2.colu ==1 || cuadrilatero2.fila == 1 && cuadrilatero2.colu ==10 || cuadrilatero2.colu ==1 || cuadrilatero2.fila == 5 && cuadrilatero2.colu ==10||cuadrilatero2.fila==1&&cuadrilatero2.colu==1)
			{
				printf("%c", carac3);
			}else {
				printf("%c", carac2);
			}
		}else{
			if(cuadrilatero2.colu == 1 || cuadrilatero2.colu == 10)
			{
				printf("%c", carac);
			}else{
				printf(" ");
			}
		}
		}  printf ("\n");
			}
				
			
			
			getch();
			
		return 0;
	}
	
