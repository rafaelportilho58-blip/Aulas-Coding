#include <stdio.h>

int main()
{
    int contador = 1;       //
    float nota;             //variavel de entrada
    float soma = 0;
    
    while (contador <= 5) {
        printf("Nota %d: ", contador);
        scanf("%f", &nota);
    
        soma += nota;
        contador++;
    }
    
    float media = soma / 5.0f;
    printf("Media = %.2f\n", media);
    return 0;
}
