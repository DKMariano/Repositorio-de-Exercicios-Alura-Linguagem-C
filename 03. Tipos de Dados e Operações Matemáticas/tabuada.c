/*****************************************************************************************************
* Data: 28/06/2024                                                                                   *
* Institui��o de Ensino: Alura                                                                       *
* Disciplina: Linguagem C                                                                            *
* Professor: Maur�cio Aniche                                                                         *
* Aluno: D. K. Mariano                                                                               *
* Descri��o: Escreva um programa que pe�a um inteiro ao usu�rio, e com esse inteiro, ele imprima,    *
*            linha-a-linha, a tabuada daquele n�mero at� o 10. Por exemplo, se ele escolher o n�mero *
*            2, o programa imprimir�: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20                              *                                                                                       *                                                                                                   *
*****************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero = 0, multiplicacao = 0;

    printf("\n\nDigite um n�mero inteiro qualquer: ");
    scanf("%d", &numero);

    printf("\n\n-----------<<< TABUADA DO N�MERO %d >>>------------", numero);

    for(int i = 0; i <=10; i++){
        multiplicacao = numero * i;
        printf("\n%d x %d = %d", numero, i, multiplicacao);
    }
    printf("\n\nFIM\n\n");
    return 0;
}
