#include <stdio.h>

int main ()
{
    int suma;
    int i;
    
    suma = 0, i=10;
    
    while (i <= 50)
    {
        if (i % 2 == 0)
        {
            suma = suma + i;
        }
        i= i + 1;
    }
    
printf("La suma de los numeros pares entre 10 y 50 es: %d", suma);
  return 0;      
}
