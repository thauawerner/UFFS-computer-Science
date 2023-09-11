char nomesTimes[4] = {'A', 'B', 'C', 'D'};
int pontos[4] = {0, 0, 0, 0};

while (1)
{
    char time1, time2;
    int gols1, gols2;

    printf("Time: ");
    scanf(" %c", &time1);

    if (time1 != 'A' && time1 != 'B' && time1 != 'C' && time1 != 'D')
    {
        break;
    }
    printf("Gols: ");
    scanf("%d", &gols1);

    printf("Time: ");
    scanf(" %c", &time2);

    printf("Gols: ");
    scanf("%d", &gols2);

    if (gols1 == gols2)
    {
        for (int i = 0; i < 4; i++)
        {
            if (nomesTimes[i] == time1 || nomesTimes[i] == time2)
            {
                pontos[i] = pontos[i] + 1;
            }
        }
    }
    else if (gols1 > gols2)
    {
        for (int i = 0; i < 4; i++)
        {
            if (nomesTimes[i] == time1)
            {
                pontos[i] = pontos[i] + 3;
            }
        }
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (nomesTimes[i] == time2)
            {
                pontos[i] = pontos[i] + 3;
            }
        }
    }
}

int campeao = 0;
int maior = pontos[0];
for (int i = 1; i < 4; i++)
{
    if (pontos[i] > maior)
    {
        maior = pontos[i];
        campeao = i;
    }
    else if (pontos[i] == maior)
    {
        maior = pontos[i];
        campeao = -1;
    }
}
if (campeao >= 0)
{
    printf("\nO campeao foi o time %c\n", nomesTimes[campeao]);
}
else
{
    printf("\nEmpate\n");
}

for (int i = 0; i < 4; i++)
{  
    printf("time %c: %d pontos\n", nomesTimes[i], pontos[i]);
}