#include <stdio.h>
#include<math.h>
#include<conio.h>
 int main(){

     int elementos_maximos = 100;

     int serie[elementos_maximos];

     int indice;

     for(indice = 1; indice <= elementos_maximos; indice++){

         serie[indice] = pow(indice,2);

     }

     int sumatoria = 0;

     for(indice = 1; indice <= elementos_maximos; indice++){

         sumatoria = sumatoria + serie[indice];

     }

     printf("Valores sumados: ");

     for(indice = 1; indice <= elementos_maximos; indice++){

         printf("%d, ", serie[indice]);

     }

     printf("\nSumatoria %d", sumatoria);

     int total_calculado = (elementos_maximos*(elementos_maximos+1)*(elementos_maximos*2+1))/6;

     printf("\nTotal calculado %d", total_calculado);
getch();
     return 0;

 }
