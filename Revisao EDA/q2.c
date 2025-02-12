/*Escreva um programa que: Solicite ao
usuário dois números inteiros que represente operações matemáticas
(1(+),2 (-), 3(∗), 4(/)).
Use um switch para realizar a operação selecionada e exibir o resultado.
Caso a operação não seja válida, exiba a mensagem "Operação inválida".*/

#include <stdio.h>

int main () {
    float n1, n2, resultado;
    int opcao;
    printf("Digite 2 numeros: ");
    scanf("%f %f", &n1, &n2);
    printf("Agora digite 1 (+) , 2 (-), 3 (*), 4 (/): ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        resultado = n1 + n2;
        printf("o resultado da soma dos numeros %.1f e %.1f e: %.2f", n1, n2, resultado);
        break;
    case 2:
        resultado = n1 - n2;
        printf("o resultado da subtracao numeros %.1f e %.1f e: %.2f", n1, n2, resultado);
        break;
    case 3:
        resultado = n1 * n2;
        printf("o resultado multiplicacao numeros %.1f e %.1f e: %.2f", n1, n2, resultado);
        break;
    case 4:
        if (n2 == 0){
            printf("Impossivel dividir por 0");
        }
        else{
        resultado = n1 + n2;
        printf("o resultado divisao numeros %.1f e %.1f e: %.2f", n1, n2, resultado);
        }
        break;
    default:
        printf("Numero invalido");
        break;
    }
    return 0;
}