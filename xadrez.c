#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int queen = 8;
    const int bishop = 5;
    const int rook = 5;
    int rookMoves = 0;
    int queenMoves = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\nMovimentação do Bispo:");
    for(int i = 0; i < bishop; i++){
        printf("\nCima Direita");
        if( i == bishop-1) {printf("\n");}//Pula linha ao final para melhor leitura no terminal
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre:");
    while(rookMoves < rook) {
        printf("\nDireita");
        rookMoves++;
        if(rookMoves == rook){printf("\n");}//Pula linha ao final para melhor leitura no terminal
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação da Rainha:");
    do{
        printf("\nEsquerda");
        queenMoves++;
        if(queenMoves == queen){printf("\n");}//Pula linha ao final para melhor leitura no terminal
    } while(queenMoves < queen);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
