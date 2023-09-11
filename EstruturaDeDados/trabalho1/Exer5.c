#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = -0;

    while (i != -1)
    {
        printf("Digite a posição -1 um para sair do loop: ");
        scanf("%d", &i);

        if (i > 0 && i <= 5)
        {
            printf("Posicao %d\n", i);
            printf("Top 5\n");
        }
        else if (i >= 6 && i <= 10)
        {
            printf("Posicao %d\n", i);
            printf("Top 10\n");
        }
        else if (i >= 11 && i <= 20)
        {
            printf("Posicao %d\n", i);
            printf("Top 20\n");
        }
        else if (i >= 21 && i <= 30)
        {
            printf("Posicao %d\n", i);
            printf("Top 30\n");
        }
        else if (i >= 31)
        {
            printf("Posicao %d\n", i);
            printf("Top 100\n");
        }
    }

    return 0;
}
