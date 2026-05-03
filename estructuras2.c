#include <stdio.h>

int main ()
{
    int num;
    int pos;
    int neg;
    int nulo;
    
    num = 0, pos = 0, neg = 0, nulo = 0;
    
    
    for (int cont = 0; cont < 100; cont++)
    {
        printf("Ingrese un numero natural:");
        scanf("%d",&num);
        if (num == 0)
        {
            nulo = nulo + 1;
        }
        else
        {
            if(num > 0)
            {
                pos = pos + 1;
            }
            else
            {
                neg = neg + 1;
            }
        }
    }
   printf("Hay %d numeros positivos, %d numeros negativos y %d numeros nulos", pos, neg, nulo);
       
  return 0;      
}

