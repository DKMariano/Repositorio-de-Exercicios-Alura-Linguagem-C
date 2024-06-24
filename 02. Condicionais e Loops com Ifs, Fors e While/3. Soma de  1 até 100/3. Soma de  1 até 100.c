/***************************************************************************************************
* Data: 24/06/2024                                                                                 *
* Desafio: Soma de todos os números de 1 até 100                                                   *
* Instituição de Ensino: Alura                                                                     *
* Disciplina: Linguagem C                                                                          *
* Professor: Maurício Aniche                                                                       *
* Aluno: D. K. Mariano                                                                             *
* Descrição: Escreva um programa que imprima a soma de todos os números de 1 até 100. Ou seja, ele *
*            calculará o resultado de 1+2+3+4+...+100.                                             *                                                                                       *                                                                                                   *
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
    printf("\n A soma de TODOS os números de 1 até 100 é %d. \n", soma);
}
