
/**
JOC X SI O
------------------------------------------------------
-initial matricea are "-" in spatiile goale
-avem 2 playeri care completeaza alternativ "X" si "O"
-in casutele deja ocupate nu mai putem reintroduce valori, apare
un mesaj de eroare si de reintroducere
-avem un switch - case pt fiecare player (de la 1-9 pt valoare din matrice)
-------------------------------------------------------
**/

#include <stdio.h>
#include <stdlib.h>

///MATRICEA INITIAL ESTE GOALA
char game[3][3] =
    {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };


void displayGrid(char game[][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3 ; j++)
        {
            printf(" %c ",game[i][j]);
        }
        printf("\n");
    }


}


int play1(char game[3][3])
{
    printf("introduceti pentru primul player pozitia: ");
    int pozitie = 0;
    scanf("%d", &pozitie);

    switch(pozitie)
    {
    case 1 :
    {
        if(game[0][0] == '-') ///AICI INLOCUIM - CU X daca playerul a ales sa adauge pe aceasta pozitie X
            game[0][0] = 'X';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 2 :
    {
        if(game[0][1] == '-') ///AICI INLOCUIM - CU X daca playerul a ales sa adauge pe aceasta pozitie X
            game[0][1] = 'X';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }



    case 3 :
    {
        if(game[0][2] == '-') ///AICI INLOCUIM - CU X daca playerul a ales sa adauge pe aceasta pozitie X
            game[0][2] = 'X';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 4 :
    {
        if(game[1][0] == '-') ///AICI INLOCUIM - CU X daca playerul a ales sa adauge pe aceasta pozitie X
            game[1][0] = 'X';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 5 :
    {
        if(game[1][1] == '-') ///AICI INLOCUIM - CU X daca playerul a ales sa adauge pe aceasta pozitie X
            game[1][1] = 'X';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 6 :
    {
        if(game[1][2] == '-') ///AICI INLOCUIM - CU X daca playerul a ales sa adauge pe aceasta pozitie X
            game[1][2] = 'X';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 7 :
    {
        if(game[2][0] == '-') ///AICI INLOCUIM - CU X daca playerul a ales sa adauge pe aceasta pozitie X
            game[2][0] = 'X';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 8 :
    {
        if(game[2][1] == '-') ///AICI INLOCUIM - CU X daca playerul a ales sa adauge pe aceasta pozitie X
            game[2][1] = 'X';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 9 :
    {
        if(game[2][2] == '-') ///AICI INLOCUIM - CU X daca playerul a ales sa adauge pe aceasta pozitie X
            game[2][2] = 'X';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    default :  ///daca se introduce alt numar in afara intervalului 1-9, pozitia e gresita
    {
        printf("Pozitie gresita\n");
        return 1;
    }
    }

}



int play2(char game[3][3])
{
    printf("introduceti pentru al doilea player pozitia: ");
    int pozitie = 0;
    scanf("%d", &pozitie);

    switch(pozitie)
    {
    case 1 :
    {
        if(game[0][0] == '-') ///AICI INLOCUIM - CU O daca playerul a ales sa adauge pe aceasta pozitie O
            game[0][0] = 'O';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 2 :
    {
        if(game[0][1] == '-') ///AICI INLOCUIM - CU O daca playerul a ales sa adauge pe aceasta pozitie O
            game[0][1] = 'O';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }



    case 3 :
    {
        if(game[0][2] == '-') ///AICI INLOCUIM - CU O daca playerul a ales sa adauge pe aceasta pozitie O
            game[0][2] = 'O';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 4 :
    {
        if(game[1][0] == '-') ///AICI INLOCUIM - CU O daca playerul a ales sa adauge pe aceasta pozitie O
            game[1][0] = 'O';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 5 :
    {
        if(game[1][1] == '-') ///AICI INLOCUIM - CU O daca playerul a ales sa adauge pe aceasta pozitie O
            game[1][1] = 'O';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 6 :
    {
        if(game[1][2] == '-') ///AICI INLOCUIM - CU O daca playerul a ales sa adauge pe aceasta pozitie O
            game[1][2] = 'O';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 7 :
    {
        if(game[2][0] == '-') ///AICI INLOCUIM - CU O daca playerul a ales sa adauge pe aceasta pozitie O
            game[2][0] = 'O';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 8 :
    {
        if(game[2][1] == '-') ///AICI INLOCUIM - CU O daca playerul a ales sa adauge pe aceasta pozitie O
            game[2][1] = 'O';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }

    case 9 :
    {
        if(game[2][2] == '-')  ///AICI INLOCUIM - CU O daca playerul a ales sa adauge pe aceasta pozitie O
            game[2][2] = 'O';
        else
        {
            printf("Reintroduceti o pozitie.\n");
            return 1;
        }
        break;
    }
    default : ///daca se introduce alt numar in afara intervalului 1-9, pozitia e gresita
    {
        printf("Pozitie gresita\n");
        return 1;
    }
    }

}

///TOATE POSIBILITATILE PENTRU CASTIG
int checkWin(char game[3][3])
{
    if(((game[0][0] == game[0][1])&& (game[0][1] == game[0][2])&&(game[0][2] == 'X')) ||
            ((game[1][0] == game[1][1])&& (game[1][1] == game[1][2])&&(game[1][2] == 'X'))||
            ((game[2][0] == game[2][1])&& (game[2][1] == game[2][2])&&(game[2][2] == 'X'))||
            ((game[0][0] == game[1][0])&& (game[1][0] == game[2][0])&&(game[2][0] == 'X'))||
            ((game[0][1] == game[1][1])&& (game[1][1] == game[2][1])&&(game[2][1] == 'X'))||
            ((game[0][2] == game[1][2])&& (game[1][2] == game[2][2])&&(game[2][2] == 'X'))||
            ((game[0][0] == game[1][1])&& (game[1][1] == game[2][2])&&(game[2][2] == 'X'))||
            ((game[2][0] == game[1][1])&& (game[1][1] == game[0][2])&&(game[0][2] == 'X')))
    {
        return  1;
    }

    if(((game[0][0] == game[0][1])&& (game[0][1] == game[0][2])&&(game[0][2] == 'O')) ||
            ((game[1][0] == game[1][1])&& (game[1][1] == game[1][2])&&(game[1][2] == 'O'))||
            ((game[2][0] == game[2][1])&& (game[2][1] == game[2][2])&&(game[2][2] == 'O'))||
            ((game[0][0] == game[1][0])&& (game[1][0] == game[2][0])&&(game[2][0] == 'O'))||
            ((game[0][1] == game[1][1])&& (game[1][1] == game[2][1])&&(game[2][1] == 'O'))||
            ((game[0][2] == game[1][2])&& (game[1][2] == game[2][2])&&(game[2][2] == 'O'))||
            ((game[0][0] == game[1][1])&& (game[1][1] == game[2][2])&&(game[2][2] == 'O'))||
            ((game[2][0] == game[1][1])&& (game[1][1] == game[0][2])&&(game[0][2] == 'O')))
    {
        return  2;
    }

}

int main()
{
    printf("Pentru player 1 --> X ; pentru player 2 --> O \n");

    int flag1 = 0; /// daca flagul este 1 --> a castigat player 1; daca e 2 --> a castigat player 2
    int a, b, i = 0;
    while(i < 9)
    {
        a = play1(game);
        while( a == 1) ///CAT TIMP POZITIA E GRESITA, SE REINTRODUCE
        {
            a = play1(game);
        }

        displayGrid(game);  ///AFISEAZA NOUA MATRICE
        i++;

        flag1 = checkWin(game);

        if(flag1 == 1 ) /// daca flagul este 1 --> a castigat player 1;
        {
            printf("A castigat playerul 1");
            break;

        }

        if(i == 9)
        {
            printf("EGALITATE!!! \n");
            break;
        }

        printf("I = %d \n", i); ///AFISEAZA CONTORUL

        b = play2(game);
        while( b == 1 ) ///CAT TIMP POZITIA E GRESITA, SE REINTRODUCE
        b = play2(game);
        displayGrid(game); ///AFISEAZA NOUA MATRICE
        i++;

        printf("I = %d \n", i);
        flag1 = checkWin(game);

        if(flag1 == 2) ///daca e 2 --> a castigat player 2
        {
            printf("A castigat playerul 2");
            break;
        }

        if(i == 9) ///daca nu se intampla sa castige niciun player --> egalitate
        {
            printf("EGALITATE!!! \n");
            break;
        }

    }


    return 0;
}
