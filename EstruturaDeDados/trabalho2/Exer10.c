#include <stdio.h>

int main()
{
    int matricula, contadorAlunos = 0;
    float nota, somaNotas = 0, mediaTurma = 0;

    while (1)
    {
        printf("Matrícula (0 para sair): ");
        scanf("%d", &matricula);

        if (matricula == 0)
        {
            break;
        }

        somaNotas = 0;

        for (int i = 1; i <= 10; i++)
        {
            printf("Nota %d: ", i);
            scanf("%f", &nota);
            somaNotas += nota;
        }

        contadorAlunos++;
        float mediaAluno = somaNotas / 10;
        mediaTurma += mediaAluno;

        printf("%d, média: %.1f\n", matricula, mediaAluno);
    }

    if (contadorAlunos > 0)
    {
        mediaTurma /= contadorAlunos;
        printf("Média geral da turma: %.1f\n", mediaTurma);
    }
    else
    {
        printf("Nenhum aluno registrado.\n");
    }

    return 0;
}
