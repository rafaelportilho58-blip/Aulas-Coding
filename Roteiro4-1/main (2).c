#include <stdio.h>

int main()
{
    int n; 
    int i = 1; 
    int soma = 0; 
     
    scanf("%d", &n); 
     
    while (i <= n) { 
        soma += i; 
        i++; 
    } 
     
    printf("Soma = %d\n", soma); 

    return 0;
}
