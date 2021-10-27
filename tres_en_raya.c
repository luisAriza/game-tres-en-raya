//Primer juego: Tres en raya

#include <stdio.h>

void loop (char c [3][3]);
void Intro_Primera (char c [3][3]);
void tablero (char c [3][3]);

int main ()
{
    char c [3][3]; //matriz de 3x3
    loop (c); //llama a todas las funciones fundamentales y hace un refresco de pantalla

    system ("pause");
    return 0;
}

void loop (char c [3][3])
{
    Intro_Primera (c);
    tablero (c);
}

void Intro_Primera (char c [3][3])
{
    int i, j;
    char aux;

    aux = '1';

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = aux++;
        }
    }
}

void tablero (char c [3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if (j < 2)
            {
                printf (" %c |",c[i][j]);
            } else {
                printf (" %c ",c[i][j]);
            }
        }
        if (i < 2) 
        {
            printf ("\n-----------\n");
        }
    }
    printf ("\n\n");
}