/***********************************************************************************************************************
* Data: 22/05/2024                                                                                                     *
* Desafio: "Olá, Linguagem C!"                                                                                         *
* Instituição de Ensino: Alura                                                                                         *
* Disciplina: Linguagem C                                                                                              *
* Professor: Maurício Aniche                                                                                           *
* Aluno: D. K. Mariano                                                                                                 *
* Descrição: Jogo de advinhação                                                                                        *                                                                                                   *
***********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int numeroSecreto = 42, chute = 0;

    printf("\nQual é o seu nome? ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("\n********************************************\n");
	printf("*            Jogo de adivinhação           *\n");
	printf("********************************************\n");

    printf("\n%s, bem vindo ao nosso jogo de adivinhação! \n", nome);
    printf("\nTente advinhar o número que escolhi! \n");

	printf("%s, qual é o seu palpite? ", nome);
	scanf("%i", &chute);
	printf("Seu chute foi %d .\n", chute);

	return 0;
}
