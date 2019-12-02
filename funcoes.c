#include "funcoes.h"

void troca(int *a, int *b)
{
    int aux;

    aux = *a;

    *a = *b;
    *b = aux;
}

void maior_valor(int *a, int *b)
{
    int aux;

    aux = *a;

    if (*b > *a)
    {
        *a = *b;
        *b = aux;
    }
}

int soma_dobro(int *a, int *b)
{
    *a *= 2;
    *b *= 2;

    return *a + *b;
}

void exercicio_7(int *a, int *b)
{
    *a = *a + *b;
}