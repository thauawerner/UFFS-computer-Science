#include <stdio.h>

int main(int argc, char const *argv[])
{
    char op;
    double oper1, oper2;

    printf("Digite um operador (+, -, *, /) para soma, subtracao, multiplicacao e divisao respectivamente\n");
    scanf("%c", &op);

    printf("Digite os operadores\n");
    scanf("%lf %lf", &oper1, &oper2);

    switch (op)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf\n", oper1, oper2, oper1 + oper2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf\n", oper1, oper2, oper1 - oper2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf\n", oper1, oper2, oper1 * oper2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf\n", oper1, oper2, oper1 / oper2);
        break;
    default:
        printf("Operador nao compativel\n");
    }
    return 0;
}
