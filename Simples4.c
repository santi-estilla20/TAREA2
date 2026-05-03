#include <stdio.h>

int main() 
{
    float  monto;
    float  tasa;
    float porcentaje;
    float total;
    
    monto = 0;
    porcentaje = 0;
    total = 0;
   
   printf("Ingrese el monto a invertir:");
   scanf("%f", &monto);

   printf("Ingrese la tasa de interés mensual:");
   scanf("%f", &tasa);
   
   porcentaje= tasa / 100;
   
   total= (monto * porcentaje) + monto;
  
   printf("El monto obtenido a final de mes será de %f", total);
   
    return 0;
}
