#include <stdio.h> // Biblioteca para entrada e saída

// Movimento básico para Torre, Rainha e Bispo (linha reta ou diagonal)
void movercasas(int mover, const char *direcao) {
    if (mover > 0) {
        printf("%s...\n", direcao); // Imprime a direção
        movercasas(mover - 1, direcao); // Chama novamente enquanto houver casas
    }
}

// Movimento diagonal do Bispo (Cima + Direita) com recursividade e loops
void moverBispo(int casas) {
    if (casas == 0) return; // Para quando acabar as casas

    for (int i = 0; i < 1; i++) { // Vertical (Cima)
        printf("Cima\n");
        for (int j = 0; j < 1; j++) { // Horizontal (Direita)
            printf("Direita\n");
        }
    }
    printf("\n"); // Espaçamentom
    moverBispo(casas - 1); // Próximo passo diagonal
}

// Movimento do Cavalo em L com loops aninhados
void moverCavalo() {
    for (int i = 0; i < 3; i++) { // Movimento pra cima
        if (i == 2) continue; // Pule após o segundo movimento
        printf("Cima\n");
    }
    for (int j = 0; j < 2; j++) { // Movimento pra direita
        if (j == 1) {
            printf("Direita\n");
            break; // Para após o movimento horizontal
        }
    }
    printf("Cavalo se movimentou em L, duas pra cima e uma à direita! ♘\n\n");
}

int main() {
    // Variáveis: Número de movimentos de cada peça
    int torre = 5, rainha = 8, bispo = 5;

    // Início do jogo
    printf("♟️ JOGO DE XADREZ ♟️\n\n");
    printf("♘ PEÇAS ♘\nTorre ♜\nBispo ♝\nRainha ♕\nCavalo ♘\n\n");

    // Torre
    printf("♜ TORRE SE MOVIMENTANDO\n");
    movercasas(torre, "Direita");
    printf("Torre moveu 5 casas para a direita! ♜\n\n");

    // Bispo
    printf("♝ BISPO SE MOVIMENTANDO\n");
    moverBispo(bispo);
    printf("Bispo moveu 5 casas na diagonal (Cima + Direita)! ♝\n\n");

    // Rainha
    printf("♕ RAINHA SE MOVIMENTANDO\n");
    movercasas(rainha, "Esquerda");
    printf("Rainha moveu 8 casas para a esquerda! ♕\n\n");

    // Cavalo
    printf("♘ CAVALO SE MOVIMENTANDO\n");
    moverCavalo();

    return 0; // Finaliza o programa
}
