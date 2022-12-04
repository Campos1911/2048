/*********************************************************
 * Autores: Anthoni Bernardi Thomes Campos & Antônio Vithor
 * Disciplina: Programação I
 * Data de Entrega: 20/12/2022
 * 
 * Descrição do Trabalho:
 * ----------------------
 * Nome do Projeto : Jogo 2048
 * Objetivo: O jogo deve funcionar exatamente como as versões
 * de 2048 já existentes.
**********************************************************/

#include <stdio.h>


int direc_linha[] = {1, 0, -1, 0};
int direc_coluna[] = {0, 1, 0, -1};

void boas_vindas() 
{
    printf("\n<<Seja bem-vindo ao 2048>>\nO jogo foi criado por: Anthoni Bernardi\n\nPor favor, insira W para continuar\n");
}

int esperando(char i) 
{
     i=1;
        while (i!=119)
        {
            scanf("\n%c", &i);
            if (i==87)
            {
                i=119;
            }
        }
    return(i);
}

void tutorial()
{
    printf("Para jogar, utilize as seguintes teclas:\n\nQ : Encerra o programa\nSetas: Movem as peças para o lado desejado\n\n");
}

void tabuleiro() 
{    
    int tabuleiro[4][4];
    int i;
    int j;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            tabuleiro[i][j]=0;
            printf("%d    ", tabuleiro[i][j]);
        }
     printf("\n\n");   
    }
}

int main() {

int i;

    boas_vindas();
    esperando(i);
    printf("\n\n");
    tutorial();
    tabuleiro();

    return 0;
}