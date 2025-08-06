#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int Torre = 5, Bispo = 5, Rainha = 8;
    int i = 0;
    int a = 1;
    int b = 1;
    
    //Movimento da Torre em 5 casas Horizontal ou Vertical a direita
    printf("Torre:\n");
    while (i < Torre)
    {
        printf("Direita\n");
        i++;
    }
    
    //Movimento do Bispo em 5 casa Diagonal para cima direita
    printf("Bispo: \n");
    for (int a = 1; a <= Bispo; a++)
    {
        printf("Cima direita\n");
    }
    
    //Movimento da Rainha em 8 casas para esquerda
    printf("Rainha: \n");
    do
    {
        printf("Esquerda\n");
        b++;

    } while (b <= Rainha);
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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
