/***********************************************************************************************************************
* Data: 22/05/2024                                                                                                     *
* Desafio: "Olá, Linguagem C!"                                                                                         *
* Instituição de Ensino: Alura                                                                                         *
* Disciplina: Linguagem C                                                                                              *
* Professor: Maurício Aniche                                                                                           *
* Aluno: D. K. Mariano                                                                                                 *
* Descrição: Escreva um programa que peça para o usuário digitar duas variáveis inteiras (x e y) e imprima o resultado *
* da multiplicação entre essas duas variáveis.                                                                         *                                                                                                   *
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
