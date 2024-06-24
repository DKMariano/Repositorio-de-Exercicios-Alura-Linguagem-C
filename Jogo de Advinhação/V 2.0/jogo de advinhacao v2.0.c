/**********************************************************************************************************
* Data: 24/06/2024                                                                                        *
* Desafio: Jogo de advinhação v2.0                                                                          *
* Instituição de Ensino: Alura                                                                            *
* Disciplina: Linguagem C                                                                                 *
* Professor: Maurício Aniche                                                                              *
* Aluno: D. K. Mariano                                                                                    *
* Descrição: Crie um programa que simule um simples jogo de advinhação no qual tem que advinhar um número *                                                                                       *                                                                                                   *
**********************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int numeroSecreto = 42, chute = 0, tentativa = 1, acertou = 0;

    printf("\nQual é o seu nome? ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("***************************************************\n");
	printf("*               Jogo de adivinhação               *\n");
	printf("***************************************************\n");

    printf("\n%s, bem vindo ao nosso jogo de adivinhação! \n", nome);
    printf("\nTente advinhar o número que escolhi! \n");
    printf("\nVou lhe dar uma dica: é um númnero positivo. ;) \n");

	while(acertou != 1){
        printf("\nTentativa n. %i \n", tentativa);
        printf("%s, qual é o seu palpite? ", nome);
        scanf("%d", &chute);
        while(getchar() != '\n');
        if (chute < 0){
            printf("\n%s, O número que escolhi foi positivo! \n", nome);
            continue;
        }else if (chute > numeroSecreto){
            printf("\n%s, O número que escolhi é MENOR que %d.\n", nome, chute);
            tentativa++;
        }else if (chute < numeroSecreto){
            printf("\n%s, O número que escolhi é MAIOR que %d.\n",  nome, chute);
            tentativa++;
        }else{
            acertou++;
        }
	}
	printf("\n%s, parabéns! Você acertou que pensei no número %d!\n",  nome, numeroSecreto);
    if (tentativa == 1){
        printf("\nVocê acertou em APENAS %d tentativa!", tentativa);
        printf("\nVocê é um(a) excelente jogador(a), %s!\n\n", nome);
    }else{
        printf("\nVocê acertou em %d tentativas!", tentativa);
        printf("\n%s, tente de novo e veja se consegue acertar mais rápido dessa vez!\n\n", nome);
    }
}
