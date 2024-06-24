/******************************************************************************************************
* Data: 24/06/2024                                                                                    *
* Desafio: Numeros de 01 até 100                                                                      *
* Instituição de Ensino: Alura                                                                        *
* Disciplina: Linguagem C                                                                             *
* Professor: Maurício Aniche                                                                          *
* Aluno: D. K. Mariano                                                                                *
* Descrição: Faça um programa que imprima todos os números de 1 a 100 usando o laço de repetição for. *                                                                                       *                                                                                                   *
******************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("== Contando de 1 a 100 ==");

    for(int i = 1; i <= 100; i++) {
        printf("%d \n", i);
    }
}
