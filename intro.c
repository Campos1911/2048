/*******************************************************************************
 * Autores: Anthoni Bernardi Thomes Campos, Antônio Vithor e Tarcísio Falquetto
 * Disciplina: Programação I
 * Data de Entrega: 20/12/2022
 * 
 * Descrição do Trabalho:
 * ----------------------
 * Nome do Projeto : Jogo 2048
 * Objetivo: O jogo deve funcionar exatamente como as versões
 * de 2048 já existentes.
*********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define TAM 4

int tabuleiro[TAM][TAM];

void tab()
{
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            tabuleiro[i][j] = 0;
            printf("   . ");
        }
    printf("\n");
    printf("\n");
    }  
}

void apresenta()
{
    system("cls");
    system("color 3A");
    printf("\n\n\t\t\t    Seja bem-vindo(a) ao SUPER 2048\n");
    intervalo();
    intervalo();
    intervalo();
    printf("\tEsse jogo foi desenvolvido por: Anthoni Bernardi, Antonio Vithor e Tarcisio Falquetto\n");    
    intervalo();
    intervalo();
    intervalo();
    printf("\n\n\n\t\t\t PRESSIONE ALGUMA TECLA PARA CONTINUAR\n");
    while (!kbhit());
    system("cls");
}

void muda_cor()
{
    system("color 4B");
    system("cls");
}

void tutorial()
{
    printf("\n\n\n\tPara jogar voce precisa saber as seguintes regras: \n");
    printf("\n\t    *Voce termina o jogo quando totalizar 2048*\n");
    printf("\n    *Para movimentar as pecas, voce utilizara as setas do teclado*\n\n");
    intervalo();
    intervalo();
    intervalo();
    system("cls");
}

void numero_random()
{
    int random, random1, add, i, j;
    srand(time(NULL)); //Configura um valor inicial a partir do qual uma sequência de números serão aleatorizados
    random=rand()%TAM; //Retorna um número aleatório

    srand(time(NULL));
    random1=rand()%TAM;

    if ((random+random1)%2==0) //Se os dois valores somados resultarem em um número par, adiciona 2;
    {
        add=2;
    }
    else
    {
        add=4; //Se for ímpar, adiciona um 4
    }
    
    for (i = 0; i < random; i++) //Estrutura de repetição responsável por adicionar um número random em algum lugar da matriz
    {
        for (j = random1; j < TAM; j++)
        {
            if (tabuleiro[i][j]==0)
            {
                tabuleiro[i][j]=add;
                return;
            }   
        }   
    }   
}

void intervalo() {for(int i=0; i<500000000; i++){}}


int main() {

    apresenta();
    muda_cor();
    tutorial();
    numero_random();

    return 0;
}