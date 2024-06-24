/***************************************************************************************************
* Data: 24/06/2024                                                                                 *
* Desafio: Soma de todos os n�meros de 1 at� 100                                                   *
* Institui��o de Ensino: Alura                                                                     *
* Disciplina: Linguagem C                                                                          *
* Professor: Maur�cio Aniche                                                                       *
* Aluno: D. K. Mariano                                                                             *
* Descri��o: Escreva um programa que imprima a soma de todos os n�meros de 1 at� 100. Ou seja, ele *
*            calcular� o resultado de 1+2+3+4+...+100.                                             *                                                                                       *                                                                                                   *
***************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int i = 1, soma = 0;

    while(i <= 100) {
        soma = soma + i;
        i++;
    }
    printf("\n A soma de TODOS os n�meros de 1 at� 100 � %d. \n", soma);
}
