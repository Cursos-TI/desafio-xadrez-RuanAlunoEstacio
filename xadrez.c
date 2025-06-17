#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int queen = 8; //constante com o número de movimentos que a rainha deve fazer
    const int bishop = 5; //constante com o número de movimentos que o bispo deve fazer
    const int rook = 5; //constante com o número de movimentos que a torre deve fazer
    const int horse = 3; //constante com o número de movimentos que o cavalo deve fazer
    int rookMoves = 0; //variável com o número de movimentos feito pela torre
    int queenMoves = 0;//variável com o número de movimentos feito pela rainha

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo:\n");
    for(int i = 0; i < bishop; i++){
        printf("Cima Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre:\n");
    while(rookMoves < rook) {
        printf("Direita\n");
        rookMoves++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação da Rainha:\n");
    do{
        printf("Esquerda\n");
        queenMoves++;
    } while(queenMoves < queen);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimentação do Cavalo: ");
    for(int i = 1; i < horse; i++){
        printf("\nBaixo");
        while(i==horse-1){
            printf("\nEsquerda\n");
            break;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
