#include <stdio.h>

int main ()
{
    int num1;
    int num2;
    int num;
    
    num1 = 0, num2 = 0, num= 0;
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &num1);
    
    printf("Ingrese otro numero entero: ");
    scanf("%d", &num2);
    
    if (num1 < num2)
    {
        num = num1;
        num1 = num2;
        num2 = num;   
    }
    if (num1 % num2 == 0)
    {
        printf("El  %d es divisor de %d", num1, num2);
    }
    else 
    {
        printf("El %d no es divisor de %d", num1, num2); 
    }
    
  return 0;      
}



    
    
    
