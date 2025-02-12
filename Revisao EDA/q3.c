/*Escreva um programa que:
Leia as notas de 5 alunos em 3 provas e armazene os valores em uma matriz 5x3.
Cada linha são as notas de cada alunos
Para cada aluno, calcule a média das 3 provas.
Exiba a média de cada aluno e indique se ele foi aprovado (média maior ou igual a 7) ou
reprovado (média menor que 7).*/

#include <stdio.h>

int main(){
    float notas[5][3];
    float media[5];
    int soma = 0;
    int i, j;

    for(i = 0; i < 5; i++){
        printf("Digite as 3 notas do aluno %d: ", i + 1);
        for(j = 0; j < 3; j++){
            scanf("%f", &notas[i][j]);
            
        }
    }
    for (i = 0; i < 5; i++){
        soma = 0;
        for (j = 0; j < 3; j++){
            soma += notas[i][j];
        }
        media[i] = (soma / 3);

        printf("Aluno: %d - Media: %.2f", i + 1, media[i]);
        if (media[i] < 7){
        printf(" Aluno reprovado\n");
        }
        else{
        printf(" Aluno aprovado\n");
        }
    }
    return 0;
}