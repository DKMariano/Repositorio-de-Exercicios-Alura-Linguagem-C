/**********************************************************************************************************************
* Data: 22/05/2024                                                                                                    *
* Desafio: "Ol�, Linguagem C!"                                                                                        *
* Institui��o de Ensino: Alura                                                                                        *
* Disciplina: Linguagem C                                                                                             *
* Professor: Maur�cio Aniche                                                                                          *
* Aluno: D. K. Mariano                                                                                                *
* Descri��o: Escreva um programa que escreva Ola linguagem C na tela.                                                 *                                                                                                   *
**********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("\nOl�, Linguagem C.\n");

    return 0;
}
