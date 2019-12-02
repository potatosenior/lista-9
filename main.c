#include <stdio.h>
#include <string.h>
#include "funcoes.c"
#include "funcoes.h"

int main() {
    int exerc = 1;

    while (exerc != 0)
    {
        printf("\n\nExercicio: ");
        scanf("%d", &exerc);
        setbuf(stdin, NULL);

        switch (exerc)
        {
            case 1:
            {
                int inteiro, *p_int;
                char string[50], *p_char;
                float real, *p_float;

                printf("Digite a frase: ");
                fgets(string, 50, stdin);
                printf("Digite o inteiro: ");
                scanf("%d", &inteiro);
                printf("Digite o float: ");
                scanf("%f", &real);

                p_int = &inteiro;
                p_char = string;
                p_float = &real;

                *p_int += 2;
                strcpy(p_char, "joao lindo");
                *p_float = 3.1415;

                printf("\nInteiro: %d\nReal: %.4f\nstring: %s", *p_int, *p_float, p_char);

                break;
            }

            case 2:
            {
                int a = 10, b = 20;
                int *p_a, *p_b;

                p_a = &a;
                p_b = &b;

                if(p_a > p_b)
                    printf("p_a = %d", p_a);
                else
                    printf("p_b = %d", p_b);

                break;
            }

            case 3:
            {
                int a = 10, b = 20;
                int *p_a, *p_b;

                printf("a = ");
                scanf("%d", &a);
                printf("b = ");
                scanf("%d", &b);

                p_a = &a;
                p_b = &b;

                if(p_a > p_b)
                    printf("p_a = %d", *p_a);
                else
                    printf("p_b = %d", *p_b);

                break;
            }

            case 4:
            {
                int a, b;

                printf("Digite o valor de A: ");
                scanf("%d", &a);
                printf("Digite o valor de B: ");
                scanf("%d", &b);
                troca(&a, &b);
                printf("Valor de A: %d, Valor de B: %d", a, b);

                break;
            }

            case 5:
            {
                int a, b;

                printf("Digite o valor de A: ");
                scanf("%d", &a);
                printf("Digite o valor de B: ");
                scanf("%d", &b);
                maior_valor(&a, &b);
                printf("Valor de A: %d, Valor de B: %d", a, b);

                break;
            }

            case 6:
            {
                int a, b, result;

                printf("Digite o valor de A: ");
                scanf("%d", &a);
                printf("Digite o valor de B: ");
                scanf("%d", &b);
                result = soma_dobro(&a, &b);
                printf("Resultado: %d", result);

                break;
            }

            case 7:
            {
                int a, b;

                printf("Digite o valor de A: ");
                scanf("%d", &a);
                printf("Digite o valor de B: ");
                scanf("%d", &b);
                exercicio_7(&a, &b);
                printf("Valor de A: %d, Valor de B: %d", a, b);

                break;
            }

            case 8:
            {
                int array[10] = { 10 };

                for (int i = 0; i < 10; ++i) {
                    printf("posicao %d = %d\n", i, &array[i]);
                }
                break;
            }

            case 9:
            {
                float matriz[3][3];

                for (int i = 0; i < 9; ++i) {
                    printf("posicao %d = %d\n", i, &matriz[i]);
                }
                break;
            }

            case 10:
            {
                int array[5];
                int * p;

                p = array;

                for (int i = 0; i < 5; ++i) {
                    printf("Digite o %d valor: ", i + 1);
                    scanf("%d", &p[i]);
                }
                printf("\nO dobro: ");
                for (int i = 0; i < 5; ++i) {
                    printf("array[%d] = %d\n",i, 2*p[i]);
                }
                break;
            }


            default:
            {
                if(exerc != 0)
                printf("Invalido");
                else{
                    printf("\nSaindo...");
                    break;
                }
            }
        }

    }

    return 0;
}