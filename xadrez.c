#include <stdio.h>

void movimentoTorre(int casa){
    if (casa > 0){
        movimentoTorre(casa - 1);
        printf ("Casa %d - direita \n", casa);
    }
    
}

void movimentoBispo(int casas){
    if(casas > 0){
        movimentoBispo(casas - 1);

        int linha = casas; // loop externo
        // loop interno só percorre a coluna diagonal
        for(int coluna = linha; coluna <= linha; coluna++){
            printf("Bispo -> Casa (%d,%d) - Cima e Direita\n", linha, coluna);
        }
    }
}


void movimentoRainha(int casa){
    if (casa > 0){
        movimentoRainha(casa - 1);
        printf("Casa %d - Esquerda \n",casa);
    }
}

int main(){
    //Declaração das variaveis
    int numeroMovimentos, contador;

    printf("Atenção digitar somente até 8 movimentos!!! \n");
    printf("Digite a quantidade de movimentos da torre: ");
    scanf("%d", &numeroMovimentos);

    printf("=================================\n");
    printf("         Movimento da Torre      \n");
    printf("=================================\n");

    if(numeroMovimentos <= 8){
        movimentoTorre(numeroMovimentos);
    } else {
        printf("Número de movimentos invalido");
    }       
    

    printf("=================================\n");
    //lendo o número de movimentos que o usuario quer que a bispo faça
    printf("Atenção digitar somente até 8 movimentos!!! \n");
    printf("Digite a quantidade de movimentos do bispo: ");
    scanf("%d", &numeroMovimentos);

    printf("\n=================================\n");
    printf("         Movimento do Bispo      \n");
    printf("=================================\n");

    if (numeroMovimentos <= 8){
        movimentoBispo(numeroMovimentos);
    } else {
        printf("Número de movimentos invalido!!! \n");
    }

    printf("=================================\n");
    //lendo o número de movimentos que o usuario quer que a rainha faça
    printf("Atenção digitar somente até 8 movimentos!!! \n");
    printf("Digite a quantidade de movimentos da rainha: ");
    scanf("%d", &numeroMovimentos);

    printf("\n=================================\n");
    printf("        Movimento da Rainha      \n");
    printf("=================================\n");

    if(numeroMovimentos <= 8){
        movimentoRainha(numeroMovimentos);
    } else {
        printf("Número de movimentos invalido!!! \n");
    }

    printf("\n=================================\n");
    printf("        Movimento do Cavalo      \n");
    printf("=================================\n");

    numeroMovimentos = 2;
    contador = 1;
    

    for (int i = 1; i <= numeroMovimentos; i++){
        for (int j = 1; j <= numeroMovimentos; j++){
            if(i == j) continue;
            if (contador > numeroMovimentos) break;

            printf("Movimento %d: Cima, Cima, Direita\n", contador);
            contador++;
            
        }
        
    }
    
   
    
    
    printf("=================================\n");

     
    return 0;
}