/********************************************************************************************************
* Data: 24/06/2024                                                                                      *
* Desafio: Numeros de 01 at� 100 (While)                                                                *
* Institui��o de Ensino: Alura                                                                          *
* Disciplina: Linguagem C                                                                               *
* Professor: Maur�cio Aniche                                                                            *
* Aluno: D. K. Mariano                                                                                  *
* Descri��o: Fa�a um programa que imprima todos os n�meros de 1 a 100 usando o la�o de repeti��o while. *                                                                                       *                                                                                                   *
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
