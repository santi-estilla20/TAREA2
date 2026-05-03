#include <stdio.h>

int main ()
{
    int num;
    int tabla;
    
    num = 0; tabla;
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    
    for (int cont = 1; cont <= 10; cont++)
    {
       tabla = num * cont;
       printf(" %d x %d = %d\n", cont, num, tabla );
    }
       
  return 0;      
}
