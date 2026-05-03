#include <stdio.h>

int main() 
{
    float  pesos;
    float  dolares;
   
    dolares, pesos = 0;
    
   printf("Ingrese la cantidad de dolares:");
   scanf ("%f", &dolares);
   
   pesos= dolares * 11.96;
  
   printf("Los dolares equivalen a %f pesos", pesos);
   
    return 0;
}
