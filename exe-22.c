#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float operando1, operando2, resultado;
    char operador, opcao;

    printf("Operando 01: ");
    scanf("%f", &operando1);
    printf("+ - * / %  : ");
    operador = getche();
    while ((operador != '+') &&
           (operador != '-') &&
           (operador != '*') &&
           (operador != '/') &&
           (operador != '%'))
            {
            printf("\n+ - * / % : ");
            operador = getche();
    }
    printf("\nOperando 02: ");
    scanf("%f", &operando2);

    switch(operador)
    {
    case '+':
        resultado = (operando1 + operando2);
        printf("\nO resultado e: %0.2f", resultado);
        break;
    case '-':
        resultado = (operando1 - operando2);
        printf("\nO resultado e: %0.2f", resultado);
        break;
    case '*':
        resultado = (operando1 * operando2);
        printf("\nO resultado e: %0.2f", resultado);
        break;
    case '/':
        resultado = (operando1 / operando2);
        printf("\nO resultado e: %0.2f", resultado);
        break;
    case '%':
        printf("1 - %% de X e X\n");
        printf("2 - X de %% e X\n");
        printf("3 - X e %% de X\n");
        printf(">> ");
        opcao = getche();
        switch(opcao)
        {
        case '1':
            resultado = ((operando1/100) * operando2);
            printf("\nO resultado e: %0.2f", resultado);
            break;
        case '2':
            resultado = ((operando1*100) / operando2);
            printf("\nO resultado e: %0.2f", resultado);
            break;
        case '3':
            resultado = ((operando1*100) / operando2);
            printf("\nO resultado e: %0.2f%%", resultado);
            break;
        default:
            printf("\nOpcao invalida...");
            break;
        }
    }
    return 0;
}
