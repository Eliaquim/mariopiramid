#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int altura;

    do
    {
        printf("Height: ");
        // implement uma forma de enviar este sem usar a biblioteca cs50
        altura = get_int();
    }
    while (altura < 0 || altura > 23);

    int espacos = altura - 1;
    int tijolos = 1;

    for(int i = 0; i < altura; i++)
    {
        for(int j = 0; j < espacos; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < tijolos; k++)
        {
            printf("#");
        }

        printf("  ");

        for(int l = 0; l < tijolos; l++)
        {
            printf("#");
        }
        printf("\n");
        espacos -= 1;
        tijolos += 1;
    }
}
