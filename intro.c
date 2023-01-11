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
int placar;

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
    while (!kbhit())
        ;
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
    srand(time(NULL));     // Configura um valor inicial a partir do qual uma sequência de números serão aleatorizados
    random = rand() % TAM; // Retorna um número aleatório

    srand(time(NULL));
    random1 = rand() % TAM;

    if ((random + random1) % 2 == 0) // Se os dois valores somados resultarem em um número par, adiciona 2;
    {
        add = 2;
    }
    else
    {
        add = 4; // Se for ímpar, adiciona um 4
    }

    for (i = 0; i < random; i++) // Estrutura de repetição responsável por adicionar um número random em algum lugar da matriz
    {
        for (j = random1; j < TAM; j++)
        {
            if (tabuleiro[i][j] == 0)
            {
                tabuleiro[i][j] = add;
                return;
            }
        }
    }
}

void intervalo()
{
    for (int i = 0; i < 500000000; i++)
    {
    }
}

void imprimir_o_board()
{
    int i, j;
    system("cls");

    imprimir_placar();
    for (i = 0; i < TAM; i++)
    {
        printf("\t\t\t *");
        for (j = 0; j < TAM; j++)
        {
            if (tabuleiro[i][j] == 0) // Se for zero, o código deixa um espaço branco
            {
                printf("  .   ");
            }
            else
                printf(" %d ", tabuleiro[i][j]); // Se possuir valor, o código printa ele
        }
        printf("*\n\t\t\t *                        *\n");
    }

    printf("\t\t\t **************************\n\n");
}

void imprimir_placar()
{
    printf("\n\n\n\t\t\t\t2048\n");
    printf("  Sua pontuacao  : %d\n\n\n\n", placar);
    printf("\t\t\t **************************\n");
}

int botao_direita(int soma_score)
{
    // andando pelas linhas
    for (i = 0; i < TAM; i++)
    {
        // lendo as colunas e fazendo operacoes
        for (j = TAM; j > 0; j--)
        {
            if ([i][j] = [i][j - 1] &&[i][j] != 0)
            {
                // valores iguais
                soma_score = soma_score + ([i][j]);
                [i][j] = ([i][j]) * 2;
                [i][j - 1] == 0;
            };
            if ([i][j] == 0 &&[i][j - 1] != 0)
            {
                // movimenento de peca
                [i][j] = [i][j - 1];
                [i][j - 1] == 0;
            };
        };
    };
    return soma_score;
}

int botao_esquerdo(int soma_score)
{
    // andando pelas linhas
    for (int i = 0; i < TAM; i++)
    {
        // lendo as colunas e fazendo operacoes
        for (int j = 0; j < TAM; j++)
        {
            if ([i][j] = [i][j + 1] &&[i][j] != 0)
            {
                // valores iguais
                soma_score = soma_score + ([i][j]);
                [i][j] = ([i][j]) * 2;
                [i][j + 1] == 0;
            };
            if ([i][j] == 0 &&[i][j + 1] != 0)
            {
                // moviemnto de peca
                [i][j] = [i][j + 1];
                [i][j + 1] == 0;
            };
        };
    };
    return soma_score;
}

int botao_baixo(int soma_score)
{
    // andando pelas colunas
    for (int j = 0; j < TAM; j++)
    {
        // lendo as linhas e fazendo operacoes
        for (int i = TAM; i > 0; i--)
        {
            if ([i][j] = [i - 1][j] &&[i][j] != 0)
            {
                // valores igaus
                soma_score = soma_score + ([i][j]);
                [i][j] = ([i][j]) * 2;
                [i - 1][j] == 0;
            };
            if ([i][j] == 0 && [i - 1][j] != 0)
            {
                // moviemento de peca
                [i][j] = [i - 1][j];
                [i - 1][j] == 0;
            };
        };
    };
    return soma_score;
}

int botao_cima(int soma_score)
{
    // andando pelas colunas
    for (int j = 0; j < TAM; j++)
    {
        // lendo as linhas e fazendo operacoes
        for (int i = 0; i < TAM; i++)
        {
            if ([i][j] = [i + 1][j] &&[i][j] != 0)
            {
                // valores iguais
                soma_score = soma_score + ([i][j]);
                [i][j] = ([i][j]) * 2;
                [i + 1][j] == 0;
            };
            if ([i][j] == 0 && [i + 1][j] != 0)
            {
                // moviento de pecas
                [i][j] = [i + 1][j];
                [i + 1][j] == 0;
            };
        };
    };
    return soma_score;
}

int movimentar_tabuleiro(int record_score)
{
    char botao;

    while (1)
    // configurar para sair do while quando perder no jogo
    {
        prinf("fala meu caro, aperte a setas de imediato ou sucumba, se tu errar a seta é sacanagem\n");
        scanf("%s", &botao);
        botao = getch();
        system("cls");
        switch (botao)
        {
        case 75:
            // 75 é o valor da tecla seta para esquerda na tabela ASCII
            record_score = botao_esquerdo(record_score);
            // colocar funcao aleatorio
            break;
        case 77:
            // 77 é o valor da tecla seta para direita na tabela ASCII
            record_score = botao_direita(record_score);
            // colocar funcao aleatorio
            break;
        case 72:
            // 72 é o valor da tecla seta para cima na tabela ASCII
            record_score = botao_cima(record_score);
            // colocar funcao aleatorio
            break;
        case 80:
            // 80 é o valor da tecla seta para baixo na tabela ASCII
            record_score = botao_baixo(record_score);
            // colocar funcao aleatorio
            break;
        default:
            prinf("poxa cara, aperta as SETAS... se nao complica para o meu lado né\n");
            break;
        }
    }
    return record_score;
}

int main()
{

    int a;

    imprimir_o_board();
    scanf("%d", a); // Apenas feito para testar o tabuleiro
    apresenta();
    muda_cor();
    tutorial();
    numero_random();
    intervalo();
    intervalo();
    intervalo();

    return 0;
}
// falta:
//         record
//         game over
//         colocar a funcao aleatoriao( novo numero), pos cada moviemento de tecla