#include <stdio.h>

int main ()
{
    int cont;
    int n;
    int pos;
    int neg;
    int nulo;
   
   n = 0, pos = 0, neg = 0, nulo = 0;
   
    printf("Indique el tamaño del arreglo: ");
    scanf("%d", &n);
    
    int arreglo [n];
    
    for (int cont = 0; cont < n; cont++)
    {
        printf("Ingrese el valor %d del arreglo: ", cont);
        scanf("%d", &arreglo[cont]);
        
    }
    
    for (int cont = 0; cont < n; cont++)
    {
        if (arreglo[cont] == 0)
        {
            nulo++;
        }
        else
        {
            if (arreglo[cont] > 0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
            
        }
    }
    
    printf("En el arreglo hay %d numeros positivos, %d numeros negativos y %d numeros nulos", pos, neg, nulo);
    
  return 0;      
}



    
    
