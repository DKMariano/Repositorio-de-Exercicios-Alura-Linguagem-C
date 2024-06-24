/**********************************************************************************************************
* Data: 24/06/2024                                                                                        *
* Desafio: Jogo de advinha��o v2.0                                                                          *
* Institui��o de Ensino: Alura                                                                            *
* Disciplina: Linguagem C                                                                                 *
* Professor: Maur�cio Aniche                                                                              *
* Aluno: D. K. Mariano                                                                                    *
* Descri��o: Crie um programa que simule um simples jogo de advinha��o no qual tem que advinhar um n�mero *                                                                                       *                                                                                                   *
**********************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int numeroSecreto = 42, chute = 0, tentativa = 1, acertou = 0;

    printf("\nQual � o seu nome? ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("***************************************************\n");
	printf("*               Jogo de adivinha��o               *\n");
	printf("***************************************************\n");

    printf("\n%s, bem vindo ao nosso jogo de adivinha��o! \n", nome);
    printf("\nTente advinhar o n�mero que escolhi! \n");
    printf("\nVou lhe dar uma dica: � um n�mnero positivo. ;) \n");

	while(acertou != 1){
        printf("\nTentativa n. %i \n", tentativa);
        printf("%s, qual � o seu palpite? ", nome);
        scanf("%d", &chute);
        while(getchar() != '\n');
        if (chute < 0){
            printf("\n%s, O n�mero que escolhi foi positivo! \n", nome);
            continue;
        }else if (chute > numeroSecreto){
            printf("\n%s, O n�mero que escolhi � MENOR que %d.\n", nome, chute);
            tentativa++;
        }else if (chute < numeroSecreto){
            printf("\n%s, O n�mero que escolhi � MAIOR que %d.\n",  nome, chute);
            tentativa++;
        }else{
            acertou++;
        }
	}
	printf("\n%s, parab�ns! Voc� acertou que pensei no n�mero %d!\n",  nome, numeroSecreto);
    if (tentativa == 1){
        printf("\nVoc� acertou em APENAS %d tentativa!", tentativa);
        printf("\nVoc� � um(a) excelente jogador(a), %s!\n\n", nome);
    }else{
        printf("\nVoc� acertou em %d tentativas!", tentativa);
        printf("\n%s, tente de novo e veja se consegue acertar mais r�pido dessa vez!\n\n", nome);
    }
}
