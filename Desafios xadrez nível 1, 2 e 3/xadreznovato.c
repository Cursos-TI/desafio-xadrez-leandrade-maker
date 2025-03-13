#include <stdio.h> // Biblioteca para entrada e saída.

int main() {
    // Inicialização das variáveis no topo
    int torre = 0, bispo = 0;

    // Inicialização do jogo
    printf("♟️ JOGO DE XADREZ ♟️\n\n");
    printf("♘ PEÇAS ♘\n");
    printf("Torre ♜\n");
    printf("Bispo ♝\n");
    printf("Rainha ♕\n\n");
    printf("♟️ Iniciando partida ♟️\n\n");

    // Movimentos da Torre usando "while"
    printf("♜ TORRE SE MOVIMENTANDO\n");
    while (torre < 5) {
        printf("Direita...\n");
        torre++;
    }
    printf("Torre se movimentou 5 casas para a direita! ♜\n\n");

    // Movimentos do Bispo usando "do-while"
    printf("♝ BISPO ESTÁ SE MOVIMENTANDO\n");
    do {
        printf("Cima, Direita...\n"); // Movimento na diagonal
        bispo++;
    } while (bispo < 5);
    printf("Bispo se movimentou 5 casas na diagonal para cima e à direita! ♝\n\n");

    // Movimentos da Rainha usando "for"
    printf("♕ RAINHA ESTÁ SE MOVIMENTANDO\n");
    for (int rainha = 0; rainha < 8; rainha++) { // Variável rainha inicializada no "for"
        printf("Esquerda...\n"); // Movimento para a esquerda
    }
    printf("Rainha se movimentou 8 casas para a esquerda! ♕\n");

    return 0; // Finaliza o programa
}
