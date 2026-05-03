#include <stdio.h>

int main ()
{
    double producto;
    int N;
    int i;
    
    producto = 1, N = 0, i = 1;
    
    printf("Ingrese un numero natural: ");
    scanf("%d", &N);
    
    while (i <= N)
    {
        producto = producto * i;
        i = i + 1;
    }
    
    printf("El producto de los %d primeros numeros naturales es: %g ", N, producto);
  
  return 0;      
}
