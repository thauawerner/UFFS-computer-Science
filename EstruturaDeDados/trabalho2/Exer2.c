#include <stdio.h>

int main(int argc, char const *argv[])
{
    int operador;
    int multiplicador;
    int result;
    int fresult;

    printf("digite um valor inteiro\n");
    scanf("%d", &operador);
    printf("Digite um valor inteiro\n");
    scanf("%d", &multiplicador);

    result = operador * multiplicador;
    int i = 0;
    while (i != result)
    {
        i = i + operador;
        fresult = i;
    }

    printf("%d\n", fresult);

    return 0;
}
