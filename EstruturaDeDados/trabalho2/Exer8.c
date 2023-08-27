#include <stdio.h>

int main()
{
    float alturaAntonio = 150;
    float alturaCarlos = 110;
    int anos = 0;

    while (alturaCarlos < alturaAntonio)
    {
        alturaAntonio += 2;
        alturaCarlos += 3;
        anos++;
    }

    printf("Seriam necessários %d anos para que Carlos tivesse a mesma altura que Antonio.\n", anos);

    return 0;
}
