/**********************************************************************************************************************
* Data: 22/05/2024                                                                                                    *
* Desafio: "Olá, Linguagem C!"                                                                                        *
* Instituição de Ensino: Alura                                                                                        *
* Disciplina: Linguagem C                                                                                             *
* Professor: Maurício Aniche                                                                                          *
* Aluno: D. K. Mariano                                                                                                *
* Descrição: Escreva um programa que escreva Ola linguagem C na tela.                                                 *                                                                                                   *
**********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("\nOlá, Linguagem C.\n");

    return 0;
}
