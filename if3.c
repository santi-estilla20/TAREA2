#include <stdio.h>
void main ()
{
    int tiempo;
    float dist;
    float distT;
    float precio;
    float precioT;
    float descuento;
    
    tiempo = 0, dist = 0, distT = 0, precio = 0, precioT = 0, descuento = 0;
    
    printf("Ingrese los dias de estancia:");
    scanf("%d", &tiempo);
    
    printf("Ingrese la distancia de ida en kilometros:");
    scanf("%f", &dist);
    
    distT= dist * 2;
    precio = distT * 0.23;
    
    if(tiempo>7)
    {
        if(distT>800)
        {
          descuento = precio * 0.3;
          precioT = precio - descuento;
          printf("El precio del ticker ida y vuelta es de: %.2f", precioT);
           
        }
        else
        {
           precioT = precio;
           printf("El precio del ticker ida y vuelta es de: %.2f", precioT);
        }
    }
    else
    {
        precioT = precio;
        printf("El precio del ticker ida y vuelta es de: %.2f", precioT);
    }
    
}
    
    
