#include <stdio.h>

void main ()
{
    float  sueldo;
    float  total;
    float aumento;

    sueldo = 0; total = 0; aumento = 0; 
   
   printf("Ingrese el sueldo del trabajador:\n");
   scanf("%f", &sueldo);

    if (sueldo<1000)
    {
        aumento = sueldo * 0.15;
        total = sueldo + aumento;
        printf("El sueldo con aumento es de:\n %.4f", total);
    }
    else 
   {
    printf ("\n");
        aumento = sueldo * 0.12;
        total= sueldo + aumento;
        
    printf("El sueldo con aumento es de:\n %.4f", total);   
   }
    
}
