#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int t_casa, b_casa, r_casa, c_casa, i =1 ;

    t_casa = 4;
    b_casa = 5;
    r_casa = 8;
    c_casa = 2;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\nBispo\n");
    do{ 
        printf("cima direita\n");
        i++;
    }while (i<=b_casa);
    
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nTorre\n");
    for(int i2=1; i2<=t_casa;i2++){
        printf("Direita\n");
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int r_i = 1;
    printf("\nRainha\n");
    while (r_i<=r_casa){ 
        
        printf(" direita\n");
        r_i++;
    }
    
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n cavalo\n");
    while (c_casa--)
    {
        // movimento do cavalo é em L ou seja 3 para uma direção e 1 para outra
        char horizontal[20] = "direita";
        char vertical[20] = "baixo";

        for (int i = 1; i <= 2; i++)
        {
            printf("%s \n",vertical);
        }
        for (int i = 1; i <= 1; i++)
        {
            printf("%s \n",horizontal);
        }
        
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
