#include <stdio.h>

int main() 
{
    float  area;
    float  circun;
    int radio;
   
    
    area, circun, radio = 0;
    
   printf("Ingrese el valor de radio:");
   scanf ("%d", &radio);
   
   
   area= 3.1416 * (radio*radio);
   circun= 2*3.1416*radio;
  
   
   printf("El area del circulo es: %f \n", area);
   printf("La circunferencia del circulo: %f \n", circun);
  
    return 0;
}
