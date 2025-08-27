#include <stdio.h>

int main(){
    //Declaração das variaveis
    int i = 1;
    int posicaoCasa = 1;
    int numeroMovimentos;

    //lendo o número de movimentos que o usuario quer que a torre faça
    printf("Digite a quantidade de movimentos da torre: ");
    scanf("%d", &numeroMovimentos);

    //utilizando do-while para fazer os movimentos da torre
    do{
        if (i == 1){
            printf("=================================\n");
            printf("         Movimento da Torre      \n");
            printf("=================================\n");
        }
        
        printf("Casa %d - Direita \n",posicaoCasa);
        i++;
        posicaoCasa++;
    } while (i <= numeroMovimentos);

    i = 1;//reiniciando a variavel i
    posicaoCasa = 1;//reiniciando a variavel posicaoCasa
    printf("=================================\n");
    //lendo o número de movimentos que o usuario quer que a bispo faça
    printf("Digite a quantidade de movimentos do bispo: ");
    scanf("%d", &numeroMovimentos);

    while (i <= numeroMovimentos){
        if (i == 1){
            printf("\n=================================\n");
            printf("         Movimento do Bispo      \n");
            printf("=================================\n");
        }

        printf("Casa %d - Cima,Direita \n", posicaoCasa);
        i++;
        posicaoCasa++;
    }

    printf("=================================\n");
    posicaoCasa = 1;//reiniciando a variavel posição casa;
    //lendo o número de movimentos que o usuario quer que a rainha faça
    printf("Digite a quantidade de movimentos da rainha: ");
    scanf("%d", &numeroMovimentos);

    for (i = 1; i <= numeroMovimentos; i++){
        if (i == 1){
            printf("\n=================================\n");
            printf("        Movimento da Rainha      \n");
            printf("=================================\n");
        }
        
        printf("Casa %d - Esquerda \n", posicaoCasa);
        posicaoCasa++;
    }
     
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