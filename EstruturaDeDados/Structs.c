/**Escreva as seguintes funções considerando o tipo Data definido nesta apresentação:
int extraiDia(Data data)
Retorna o dia que compõe a data passada como parâmetro (data).
int comparaDatas(Data data1, Data data2)
Retorna -1 se a data data1 é anterior à data data2, 1 se a data data1 é posterior à data data2
e 0 se as datas data1 e data2 são iguais.
Declare um tipo Fraction que consista em uma struct contendo dois membros,
numerador e denominador, do tipo int, e faça o seguinte:
Escreva uma função setFraction
que recebe dois argumentos do tipo int (o numerador e o denominador), e retorna os valores em um tipo Fraction.
Escreva uma função multFraction
que recebe dois argumentos do tipo Fraction, multiplica, armazena o resultado em uma outra variável 
do tipo Fraction e retorna esta variável.  Lembrando: 4/5 x 3/2 = (4 x 3)/(5 x 2

*/


#include <stdio.h>
#include <locale.h>
typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

int extraiDia(Data data)
{
    return data.dia;
}

int comparaData(Data data1, Data data2)
{
    int Ddata1 = (data1.ano * 365.25) + (data1.mes * 30) + data1.dia;
    int Ddata2 = (data2.ano * 365.25) + (data2.mes * 30) + data2.dia;

    if (Ddata1 < Ddata2)
    {
        return -1;
    }
    else if (Ddata1 > Ddata2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

typedef struct
{
    int numeradador;
    int denominador;
} Fraction;

Fraction setFraction(int numerador, int denominador)
{
    Fraction f;
    f.numeradador = numerador;
    f.denominador = denominador;
    return f;
}

Fraction multFraction(Fraction f1, Fraction f2){
    Fraction fraction;
    fraction.numeradador = f1.numeradador*f2.numeradador;
    fraction.denominador = f1.denominador*f2.denominador;
    return fraction;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");

    /**
    Data Data1 = {15, 9, 2023};
    Data Data2 = {14, 9, 2023};

    printf("%d\n", extraiDia(Data1));
    printf("%d", comparaData(Data1, Data2));
    */
    Fraction f1,f2,f3;
    f1 =setFraction(2,3);
    f2 =setFraction(4,5);
    f3 = multFraction(f1,f2);
    printf("%d/ %d\n", f1.numeradador, f1.denominador);
    printf("%d/ %d\n", f2.numeradador, f2.denominador);
    printf("%d/ %d\n", f3.numeradador, f3.denominador);

    return 0;
}
