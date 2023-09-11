#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    int po = 0;
    int no = 0;
    int i = 0;
    
    while (i <4)
    {
        printf("Digite um numero inteiro");
        scanf( "%i", &input);

        if (input >= 0)
        {
            po++;
        }
        else{
            no++;
        }
       
        i++;
        
    }
    
 printf("%d (+) e %d (-)\n", po, no);

 return 0;
}
