/***********************************************************************************************************************
* Data: 22/05/2024                                                                                                     *
* Desafio: "Ol�, Linguagem C!"                                                                                         *
* Institui��o de Ensino: Alura                                                                                         *
* Disciplina: Linguagem C                                                                                              *
* Professor: Maur�cio Aniche                                                                                           *
* Aluno: D. K. Mariano                                                                                                 *
* Descri��o: Escreva um programa que pe�a para o usu�rio digitar duas vari�veis inteiras (x e y) e imprima o resultado *
* da multiplica��o entre essas duas vari�veis.                                                                         *                                                                                                   *
***********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int x = 0, y = 0, multiplicacao = 0;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    multiplicacao = x * y;

    printf("x * y = %d", multiplicacao);

}
