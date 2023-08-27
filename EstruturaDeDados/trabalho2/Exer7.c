#include <stdio.h>

int main()
{
    float salario, somaSalarios = 0;
    int numFilhos, somaFilhos = 0;
    int totalHabitantes = 0;

    while (1)
    {
        printf("Salário (-1 para sair): ");
        scanf("%f", &salario);

        if (salario < 0)
        {
            break;
        }

        printf("Número de filhos: ");
        scanf("%d", &numFilhos);

        somaSalarios += salario;
        somaFilhos += numFilhos;
        totalHabitantes++;
    }

    if (totalHabitantes > 0)
    {
        float mediaSalarios = somaSalarios / totalHabitantes;
        float mediaFilhos = (float)somaFilhos / totalHabitantes;
        printf("Média salários: %.2f\n", mediaSalarios);
        printf("Média filhos: %.1f\n", mediaFilhos);
    }
    else
    {
        printf("Nenhum habitante registrado.\n");
    }

    return 0;
}
