#include <stdio.h>

int main(){
    //Declaração das variaveis
    int i = 1, j = 1;
    int posicaoCasa = 1;
    int numeroMovimentos,opcao_1,opcao_2;

    //lendo o número de movimentos que o usuario quer que a torre faça
    printf("Atenção digitar somente até 8 movimentos!!! \n");
    printf("Digite a quantidade de movimentos da torre: ");
    scanf("%d", &numeroMovimentos);

    //utilizando do-while para fazer os movimentos da torre
    if(numeroMovimentos <= 8){
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
    }else {
        printf("Número de movimentos invalido!!! \n");
    }
    

    i = 1;//reiniciando a variavel i
    posicaoCasa = 1;//reiniciando a variavel posicaoCasa
    printf("=================================\n");
    //lendo o número de movimentos que o usuario quer que a bispo faça
    printf("Atenção digitar somente até 8 movimentos!!! \n");
    printf("Digite a quantidade de movimentos do bispo: ");
    scanf("%d", &numeroMovimentos);
    if (numeroMovimentos <= 8){
    
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
    } else {
        printf("Número de movimentos invalido!!! \n");
    }

    printf("=================================\n");
    posicaoCasa = 1;//reiniciando a variavel posição casa;
    //lendo o número de movimentos que o usuario quer que a rainha faça
    printf("Atenção digitar somente até 8 movimentos!!! \n");
    printf("Digite a quantidade de movimentos da rainha: ");
    scanf("%d", &numeroMovimentos);

    if(numeroMovimentos <= 8){
        for (i = 1; i <= numeroMovimentos; i++){
            if (i == 1){
                printf("\n=================================\n");
                printf("        Movimento da Rainha      \n");
                printf("=================================\n");
            }
            
            printf("Casa %d - Esquerda \n", posicaoCasa);
            posicaoCasa++;
        }
    } else {
        printf("Número de movimentos invalido!!! \n");
    }

    printf("=================================\n");
    printf("\n=================================\n");
    printf("        Movimento do Cavalo      \n");
    printf("=================================\n");

    //Escolha do usuario para onde o cavalo vai se mover

    printf("Escolha uma opção para a direção que o cavalo deve se mover: \n");
    printf("1.Esquerda \n");
    printf("2.Direita \n");
    printf("Escolha: ");
    scanf("%d", &opcao_1);

    printf("Escolha uma opção para a direção que o cavalo deve se mover: \n");
    printf("1.Cima \n");
    printf("2.Baixo \n");
    printf("Escolha: ");
    scanf("%d", &opcao_2);

    int k = 1;//inicialização da variavel k

    //utilizado switch para percorrer as decisões do usuario
    switch (opcao_1){
    case 1:
        switch (opcao_2){
        case 1://mostra pro usuario cima,cima,esquerda
            for (i = 1; i == 1; i--){
                while (j <= 2){
                    printf("Cima \n");
                    j++;
                }
            }

            do{
                printf("Esquerda \n");
                k--;
            } while (k == 1);
        break;
        case 2://mostra pro usuario baixo,baixo,esquerda
            for (i = 1; i == 1; i--){
                while (j <= 2){
                    printf("Baixo \n");
                    j++;
                }
            }

            do{
                printf("Esquerda \n");
                k--;
            } while (k == 1);
        break;
        
        default:
            printf("Opção inválida");
        break;
        }
    break;
    case 2:
        switch (opcao_2){
        case 1://mostra pro usuario cima,cima,direita
            for (i = 1; i == 1; i--){
                while (j <= 2){
                    printf("Cima \n");
                    j++;
                }
            }


            do{
                printf("Direita \n");
                k--;
            } while (k == 1);
        break;
        case 2://mostra pro usuario baixo,baixo,esquerda
            for (i = 1; i == 1; i--){
                while (j <= 2){
                    printf("Baixo \n");
                    j++;
                }
            }

            do{
                printf("Direita \n");
                k--;
            } while (k == 1);
        break;
        
        default:
            printf("Opção inválida");
        break;
        }
    break;
    
    default:
        printf("Opção inválida");
    break;
    }
    
    
    printf("=================================\n");

     
    return 0;
}


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.