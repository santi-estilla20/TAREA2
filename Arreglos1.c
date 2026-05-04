#include <stdio.h>

int main ()
{
    
    int cont;
    int suma;
    int n;
   
   suma = 0, n = 0 ; 
    printf("Indique el tamaño del arreglo: ");
    scanf("%d", &n);
    
    int arreglo [n];
    
    for (int cont = 0; cont < n; cont++)
    {
        printf("Ingrese el valor %d del arreglo: ", cont);
        scanf("%d", &arreglo[cont]);
        suma = suma + arreglo[cont];
    }
    
    printf("La suma de los elementos del arreglo es %d", suma);
    
  return 0;      
}
