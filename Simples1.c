#include <stdio.h>

int main() 
{
    int num1;
    int num2;
    int suma;
    int resta;
    int mult;
    
    num1 = 0, num2 = 0, suma = 0, resta = 0, mult = 0;
    
   printf("Ingrese un numero entero:");
   scanf ("%d", &num1);
   printf("Ingrese otro numero entero:");
   scanf ("%d", &num2);
   
   suma= num1 + num2;
   resta= num1 - num2;
   mult = num1 * num2;
   
   printf("La suma de los numeros es: %d \n", suma);
   printf("La resta de los numeros es: %d \n", resta);
   printf("La multiplicacion de los numeros es: %d \n", mult);
  
    return 0;
}
