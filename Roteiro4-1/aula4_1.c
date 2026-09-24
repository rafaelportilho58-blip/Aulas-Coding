#include <stdio.h>

int main()
{
    float nota;
    float soma = 0;
    int quantidade = 0;
    
    printf("Digite uma nota ou -1 para sair: ");
    scanf("%f", &nota);
    
    while (nota != -1) {
        soma += nota;
        quantidade++;
    
        printf("Digite uma nota ou -1 para sair: ");
        scanf("%f", &nota);
    }
    
    if (quantidade > 0) {
        printf("Media = %.2f\n", soma / quantidade);
        printf("Soma total das notas: %.2f\n", soma);
        printf("Quantidade de notas inseridas: %d\n", quantidade);
    }

    return 0;
}
