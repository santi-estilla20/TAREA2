#include <stdio.h>

int main ()
{
    int num1;
    int num2;
    
    num1 = 0, num2 = 0;
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &num1);
    
    printf("Ingrese otro numero entero: ");
    scanf("%d", &num2);
    
    if (num1 % num2 == 0)
    {
        printf("El  %d es divisor de %d", num1, num2);
    }
    else 
    {
        printf("El %d no es dividor de %d", num1, num2); 
    }
    
  return 0;      
}



    
    
