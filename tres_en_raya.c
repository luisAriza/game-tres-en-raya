//Primer juego: Tres en raya

#include <stdio.h>

void loop (char c [3][3]);
void Intro_Primera (char c [3][3]);
void tablero (char c [3][3]);
void Intro_Yo (char c [3][3]);

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
    Intro_Yo (c);
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

void Intro_Yo (char c [3][3])
{
    int i, j, k;
    char aux;
    do
    {
        do
        {
            printf ("Coloca una ficha: ");
            fflush (stdin);
            scanf ("%c", &aux);
        } while (aux < '1' || aux > '9');

        k = 0;

        switch (aux)
        {
            case '1':
            {
                i = 0;
                j = 0;
                if (c[i][j] == 'X' || c[i][j] =='O')
                {
                    k = 1;
                    printf ("La casilla esta ocupada! Intentalo con otro numero!!\n\n");
                }       
                break;
            }
            case '2':
            {
                i = 0;
                j = 1;
                if (c[i][j] == 'X' || c[i][j] =='O')
                {
                    k = 1;
                    printf ("La casilla esta ocupada! Intentalo con otro numero!!\n\n");
                }       
                break;
            }
            case '3':
            {
                i = 0;
                j = 2;
                if (c[i][j] == 'X' || c[i][j] =='O')
                {
                    k = 1;
                    printf ("La casilla esta ocupada! Intentalo con otro numero!!\n\n");
                }       
                break;
            }
            case '4':
            {
                i = 1;
                j = 0;
                if (c[i][j] == 'X' || c[i][j] =='O')
                {
                    k = 1;
                    printf ("La casilla esta ocupada! Intentalo con otro numero!!\n\n");
                }       
                break;
            }
            case '5':
            {
                i = 1;
                j = 1;
                if (c[i][j] == 'X' || c[i][j] =='O')
                {
                    k = 1;
                    printf ("La casilla esta ocupada! Intentalo con otro numero!!\n\n");
                }       
                break;
            }
            case '6':
            {
                i = 1;
                j = 2;
                if (c[i][j] == 'X' || c[i][j] =='O')
                {
                    k = 1;
                    printf ("La casilla esta ocupada! Intentalo con otro numero!!\n\n");
                }       
                break;
            }
            case '7':
            {
                i = 2;
                j = 0;
                if (c[i][j] == 'X' || c[i][j] =='O')
                {
                    k = 1;
                    printf ("La casilla esta ocupada! Intentalo con otro numero!!\n\n");
                }       
                break;
            }
            case '8':
            {
                i = 2;
                j = 1;
                if (c[i][j] == 'X' || c[i][j] =='O')
                {
                    k = 1;
                    printf ("La casilla esta ocupada! Intentalo con otro numero!!\n\n");
                }       
                break;
            }
            case '9':
            {
                i = 2;
                j = 2;
                if (c[i][j] == 'X' || c[i][j] =='O')
                {
                    k = 1;
                    printf ("La casilla esta ocupada! Intentalo con otro numero!!\n\n");
                }       
                break;
            }
        }
    } while (k == 1);
    
    c[i][j] = 'X';
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
                printf (" %c |", c[i][j]);
            } else {
                printf (" %c ", c[i][j]);
            }
        }
        if (i < 2) 
        {
            printf ("\n-----------\n");
        }
    }
    printf ("\n\n");
}