/***********************************************************************************************************************
* Data: 22/05/2024                                                                                                     *
* Desafio: "Ol�, Linguagem C!"                                                                                         *
* Institui��o de Ensino: Alura                                                                                         *
* Disciplina: Linguagem C                                                                                              *
* Professor: Maur�cio Aniche                                                                                           *
* Aluno: D. K. Mariano                                                                                                 *
* Descri��o: Jogo de advinha��o                                                                                        *                                                                                                   *
***********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int numeroSecreto = 42, chute = 0;

    printf("\nQual � o seu nome? ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("\n********************************************\n");
	printf("*            Jogo de adivinha��o           *\n");
	printf("********************************************\n");

    printf("\n%s, bem vindo ao nosso jogo de adivinha��o! \n", nome);
    printf("\nTente advinhar o n�mero que escolhi! \n");

	printf("%s, qual � o seu palpite? ", nome);
	scanf("%i", &chute);
	printf("Seu chute foi %d .\n", chute);

	return 0;
}
