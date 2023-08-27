#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    printf("Digite um valor inteiro\n");
    scanf("%d", &input);
    int i = 1;
    if (input != 0)
    {
        while (i <= input)
        {
            if (input / 2 == i)
            {
                printf("metade\n");
            }
            else
            {
                printf("%d\n", i);
            }
            i++;
        }
    }
    else
    {
        printf("valor de entrada invalido");
    }

    return 0;
}