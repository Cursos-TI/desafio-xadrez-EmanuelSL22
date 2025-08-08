#include <stdio.h>


void Torre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    Torre(casas - 1);
}


void BispoDiagonal(int casas) {
    for (int i = 0; i < casas; i++) {       
        for (int j = 0; j < casas; j++) {   
            if (i == j) {
                printf("Diagonal Direita Baixo\n");
            }
        }
    }
    
    if (casas > 1) {
        BispoDiagonal(casas - 1);
    }
}


void RainhaEsquerda(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    RainhaEsquerda(casas - 1);
}




void Cavalo(int linhas, int colunas) {
    for (int i = linhas; i >= 0; i--) {
        for (int j = 0; j <= colunas; j++) {
            
            if (i - 2 >= 0 && j + 1 <= colunas) {
                printf("Cavalo: Direita, Direita,\n");
                printf("Cavalo: Cima\n");
                
                break;  
            }
            
            continue;
        }
    }
}

// ------------------------------
// Função principal
// ------------------------------
int main() {
    
    int casasTorre = 5;
    int casasBispo = 3;
    int casasRainha = 8;
    int linhasCavalo = 3;
    int colunasCavalo = 3;

    // Movimentação da Torre
    printf("Movimento da Torre:\n");
    Torre(casasTorre);
    printf("\n");

    // Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    BispoDiagonal(casasBispo);
    printf("\n");

    // Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    RainhaEsquerda(casasRainha);
    printf("\n");

    // Movimentação do Cavalo
    printf("Movimento do Cavalo:\n");
    Cavalo(linhasCavalo, colunasCavalo);
    printf("\n");

    return 0;
}
