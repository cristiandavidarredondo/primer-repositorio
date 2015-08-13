
#include <stdio.h>
#include "calculadora.h"

int dato1, dato2;
int dato;
int main(void)
{
printf("CALCULADORA");
printf("Que desea hacer \n 1.sumar \n 2.restar \n 3.multiplicar \n 4.dividir");
scanf("%d",&dato);
printf("Ingrese los dos valores a operar:");
scanf("%d%d",&dato1,dato2);
switch(dato)

  {
   case 1:

int suma(dato1,dato2);
   
   case 2:
int resta(dato1,dato2);

   case 3:
int multiplicacion(dato1,dato2);

   case 4:
int division(dato1,dato2);

  }

  return 0;
  
}  
