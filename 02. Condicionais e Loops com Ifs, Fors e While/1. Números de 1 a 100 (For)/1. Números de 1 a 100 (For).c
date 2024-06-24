/******************************************************************************************************
* Data: 24/06/2024                                                                                    *
* Desafio: Numeros de 01 at� 100                                                                      *
* Institui��o de Ensino: Alura                                                                        *
* Disciplina: Linguagem C                                                                             *
* Professor: Maur�cio Aniche                                                                          *
* Aluno: D. K. Mariano                                                                                *
* Descri��o: Fa�a um programa que imprima todos os n�meros de 1 a 100 usando o la�o de repeti��o for. *                                                                                       *                                                                                                   *
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
