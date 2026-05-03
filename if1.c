#include <stdio.h>

void main ()
{
    float  compra;
    float  total;
    float descuento;

    compra = 0; total = 0; descuento = 0; 
   
   printf("Ingrese el monto de compra del cliente:\n");
   scanf("%f", &compra);

    if (compra>2500)
    {
        descuento = compra * 0.08;
        total = compra - descuento;
        printf("El monto total con descuento es de:\n %.2f", total);
    }
    else 
   {
    printf ("\n");
    printf("El monto total es de:\n %.2f", compra);   
   }
    
}
