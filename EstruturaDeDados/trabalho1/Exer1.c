#include <stdio.h>
int main(int argc, char const *argv[])
{
  float horasTrabalhadas, valorHora, salario;

    printf("Horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Valor da hora: ");
    scanf("%f", &valorHora);

    salario = horasTrabalhadas * valorHora;

    if (horasTrabalhadas > 200) {
        salario *= 1.05; // Acrescenta 5% ao salário
    }

    printf("Salário: %.2f\n", salario);

    return 0;
}

 