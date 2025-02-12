/*Escreva um programa que:
Solicite ao usuário a entrada de 20 números inteiros e os armazene em um vetor.
Classifique os números em dois vetores distintos: um para números positivos e outro para
negativos.
Ao final, exiba:
a. O vetor de números positivos.
b. O vetor de números negativos.
c. A soma dos números positivos e a soma dos números negativos*/

#include <stdio.h>

int main(){
    int num[5], pos[5], neg[5];
    int soma_pos = 0, soma_neg = 0, i, count_pos = 0, count_neg = 0;

    printf("Digite 5 numeros ");

    for (i = 0; i < 5; i++){
        scanf("%d", &num[i]);
        if (num[i] >= 0){
            pos[count_pos] = num[i];
            soma_pos += num[i];
            count_pos++;
        }
        else{
            neg[count_neg] = num[i];
            soma_neg += num[i];
            count_neg++;
        }
    }
    for(i = 0;i < count_pos; i++){
        printf("%d ", pos[i]);
    }
    printf("\n");
    for(i = 0; i < count_neg; i++){
        printf("%d ", neg[i]);
    }
    printf("\n");
    printf("soma positivos: %d\n", soma_pos);
    printf("soma negativos: %d\n", soma_neg);
    return 0;
}