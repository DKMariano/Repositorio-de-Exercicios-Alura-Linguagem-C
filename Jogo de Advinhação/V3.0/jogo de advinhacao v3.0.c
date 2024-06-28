/**********************************************************************************************************
* Data: 28/06/2024                                                                                        *
* Desafio: Jogo de advinha��o v3.0                                                                          *
* Institui��o de Ensino: Alura                                                                            *
* Disciplina: Linguagem C                                                                                 *
* Professor: Maur�cio Aniche                                                                              *
* Aluno: D. K. Mariano                                                                                    *
* Descri��o: Crie um programa que simule um simples jogo de advinha��o no qual tem que advinhar um n�mero *                                                                                       *                                                                                                   *
**********************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int chute = 0, tentativa = 1, pontos = 1000, pontos_perdidos = 0;
    int segundos = time(0);
    srand(segundos);
    int numeroSecreto = rand() % 100;

    printf("\nQual � o seu nome? ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("\n\n***************************************************\n");
	printf("*               Jogo de adivinha��o               *\n");
	printf("***************************************************\n");

    printf("\n%s, bem vindo ao nosso jogo de adivinha��o! \n", nome);
    printf("\nTente advinhar o n�mero que escolhi! \n");
    printf("\nVou lhe dar uma dica: � um n�mnero positivo. ;) \n");

	while(chute != numeroSecreto){
        printf("\n-------------------------------------------------\n");
        printf("\nTentativa n. %i \n", tentativa);
        printf("%s, qual � o seu palpite? ", nome);
        scanf("%d", &chute);
        while(getchar() != '\n');
        if (chute < 0){
            printf("\n%s, O n�mero que escolhi foi positivo! ", nome);
            continue;
        }else if (chute > numeroSecreto){
            printf("\n%s, O n�mero que escolhi � MENOR que %d.", nome, chute);
            tentativa++;
        }else if (chute < numeroSecreto){
            printf("\n%s, O n�mero que escolhi � MAIOR que %d.",  nome, chute);
            tentativa++;
        }
        pontos_perdidos = abs(chute - numeroSecreto) / 2;
        pontos = pontos - pontos_perdidos;
	}
	printf("\n-------------------------------------------------\n");
	printf("\%s, parab�ns!\nVoc� acertou que pensei no n�mero %d!",  nome, numeroSecreto);
	printf("\nSeu total de pontos foi %d!", pontos);
    if (tentativa == 1){
        printf("\nVoc� acertou em APENAS %d tentativa!", tentativa);
        printf("\nVoc� � um(a) excelente jogador(a), %s!\n\n", nome);
    }else{
        printf("\nVoc� acertou em %d tentativas!", tentativa);
        printf("\n%s, tente de novo e veja se consegue acertar mais r�pido dessa vez!\n\n", nome);
    }
}
