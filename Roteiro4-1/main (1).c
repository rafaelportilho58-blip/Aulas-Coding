#include <stdio.h>

int main()
{
    int contador = 1; 
    int soma = 0; 
     
    while (contador <= 5) { 
        soma += contador; 
        contador++; 
    } 
     
    printf("Soma = %d\n", soma);

    return 0;
}
