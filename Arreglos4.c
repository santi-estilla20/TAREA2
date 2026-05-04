#include <stdio.h>

int main ()
{
    
    int cont;
    int n;

    n = 0;
  
    int arreglo [100];
    
    for (int cont = 0; cont < 100 ; cont++)
    {
        arreglo[cont] = n;
        n = n + 2;
    }
    for (int cont = 0; cont < 100; cont++)
    {
        printf( "%d  " , arreglo[cont]);
    }

  return 0;      
}
