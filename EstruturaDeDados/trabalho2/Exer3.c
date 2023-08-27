#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    int soma;
    printf("digite um valor inteiro\n");
    scanf("%d", &input);
    int i = 0;

    while (i <= input)
    {
        soma = soma + i;
        i++;
    }

    printf("%d\n", soma);
    return 0;
}
