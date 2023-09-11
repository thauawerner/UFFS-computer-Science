#include <stdio.h>

int main(int argc, char const *argv[])
{
    int horaIn, horaFi, range;
    printf("Digite a hora de inicio do evento! \n");
    scanf("%d", &horaIn);
    printf("Digite a hora de termuino do evento! \n");
    scanf("%d", &horaFi);
    
    if (horaFi >= horaIn) {
        range = horaFi - horaIn;
    } else {
        range = 24 - horaIn + horaFi;
    }

    printf("Duração: %d horas\n", range);


    return 0;
}
