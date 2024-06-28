/*****************************************************************************************************
* Data: 28/06/2024                                                                                   *
* Instituição de Ensino: Alura                                                                       *
* Disciplina: Linguagem C                                                                            *
* Professor: Maurício Aniche                                                                         *
* Aluno: D. K. Mariano                                                                               *
* Descrição: Escreva um programa que peça um inteiro ao usuário, e com esse inteiro, ele imprima,    *
*            linha-a-linha, a tabuada daquele número até o 10. Por exemplo, se ele escolher o número *
*            2, o programa imprimirá: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20                              *                                                                                       *                                                                                                   *
*****************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero = 0, multiplicacao = 0;

    printf("\n\nDigite um número inteiro qualquer: ");
    scanf("%d", &numero);

    printf("\n\n-----------<<< TABUADA DO NÚMERO %d >>>------------", numero);

    for(int i = 0; i <=10; i++){
        multiplicacao = numero * i;
        printf("\n%d x %d = %d", numero, i, multiplicacao);
    }
    printf("\n\nFIM\n\n");
    return 0;
}
