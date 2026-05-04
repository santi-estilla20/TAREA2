#include <stdio.h>

int main ()
{
    
    int cont;
    int n;
    int i;
    int num;
   
   n = 0, i = 0, num = 0,
   
    printf("Indique el tamaño del arreglo: ");
    scanf("%d", &n);
    
    int arreglo [n];
    
    for (int cont = 0; cont < n; cont++)
    {
        printf("Ingrese el valor %d del arreglo: ", cont);
        scanf("%d", &arreglo[cont]);
        
    }
    
    printf("Ingrese un numero entero para determinar cuántas veces se repite: ");
        scanf("%d", &num);
        
    for (int cont = 0; cont < n; cont++)
    {
        if(arreglo[cont] == num )
        {
            i++;
        }
    }
printf("El número %d se encuentra %d veces en el arreglo", num, i);
    
  return 0;      
}



    
    
