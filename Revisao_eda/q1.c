/*Escreva um programa que:
Solicite ao usuário dois números inteiros n1 e n2, onde
n1
< n2.
Calcule e exiba a
soma
de todos os números entre n1 e n2, incluindo n1 e n2.*/

#include <stdio.h>

int main () {
    int n1, n2, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero maior que o anterior: ");
    scanf("%d", &n2);
    if (n1 < n2) {
        for(int i = n1;i <= n2; i++){
            soma += i;
        }
    printf("A soma dos numeros e: %d \n", soma);    
    } 
    else {
        printf("O segundo numero e menor que o primeiro");
    }
    return 0;
}