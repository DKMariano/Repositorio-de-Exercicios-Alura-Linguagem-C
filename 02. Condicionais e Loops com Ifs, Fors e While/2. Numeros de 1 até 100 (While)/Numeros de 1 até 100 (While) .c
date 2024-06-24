/********************************************************************************************************
* Data: 24/06/2024                                                                                      *
* Desafio: Numeros de 01 até 100 (While)                                                                *
* Instituição de Ensino: Alura                                                                          *
* Disciplina: Linguagem C                                                                               *
* Professor: Maurício Aniche                                                                            *
* Aluno: D. K. Mariano                                                                                  *
* Descrição: Faça um programa que imprima todos os números de 1 a 100 usando o laço de repetição while. *                                                                                       *                                                                                                   *
********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("== Contando de 1 a 100 ==");

    int i = 1;

    while(i <= 100) {
        printf("\n%d \n", i);
        i++;
    }
}
