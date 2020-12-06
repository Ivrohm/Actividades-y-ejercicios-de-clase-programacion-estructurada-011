#include <stdio.h>
#include <stdio.h>
#include <string.h>
typedef struct{
    char matricula[8];
    int parcial1;
    int parcial2;
    int pia;
    float final;
}evaluacion;

void fun_captura(evaluacion *, int *);

int main(){
   FILE *fp;
   int j, i, numero_evalu= 50;
   fp = fopen("evaluaciones.csv", "w+");
   	if (fp == NULL){
   		printf("Error");
  	}
   
  		 evaluacion evalu[numero_evalu];

   		for (i=0; i<numero_evalu; i ++){
          	fun_captura (evalu, &j);
    	}

   fprintf(fp, "matricula, parcial 1, parcial 2, pia, total final \n");
   for(i=0; i<numero_evalu; i++){
       evalu[i].final = (float) (evalu[i].parcial1 + evalu[i].parcial2 + evalu[i].pia) / 3;
       fflush(stdin);
       fprintf(fp, "%s, %d, %d, %d, %.2f\n", evalu[i].matricula, evalu[i].parcial1, evalu[i].parcial2, evalu[i].pia, evalu[i].final);
   }
   
   fclose(fp);
   printf("El archivo se a guardado");

 return 0;
}

 void fun_captura(evaluacion a[], int *j){
 		
         printf("\n Ingrese numero de matricula del alumno %d: ", *j+1);
         fflush(stdin);
         scanf("%s", a[*j].matricula);
         printf("Ingrese Calificacion del primer parcial: ");
         fflush(stdin);
         scanf("%d", &a[*j].parcial1);
         printf("Ingrese Calificacion del segundo parcial: ");
         fflush(stdin);
         scanf("%d", &a[*j].parcial2);
         printf("Ingrese Calificacion del PIA: ");
         fflush(stdin);
         scanf("%d", &a[*j].pia);
 }
