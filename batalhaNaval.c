#include <stdio.h>

int main() {
    //inicialização dos vetores para o tabuleiro e as letras
    int tabuleiro [10][10];
    char letras [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //loop que atribui valor 0 ao tabuleiro por completo
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    //loop aninhado para definir posição dos barcos Horizontais (Barco 1: Linha 5, Colunas B até D, Barco 2: Linha 7, Coluna G até I)
    for (int i = 6; i <= 8; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            tabuleiro[j][4] = 3;
        }
        
        tabuleiro[i][6] = 3;
    }

    //loop para definir posição dos barcos na Diagonal (Posição i iguais no array bidimensional. Posição j sempre em um lado somando e do outro diminuindo um cálculo que o resultado seja 9, que é a posição diagonal inversa do tabuleiro)  
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            tabuleiro[3+j][6-j] = 3;
        }
        
        tabuleiro[i][i] = 3;
    }

    //imprimindo o tabuleiro, com título indicativo
    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");
    
    //Loop para impressão da posição das colunas em letras
    for (int i = 0; i < 10; i++){
        printf(" %c", letras[i]);
    }

    printf("\n"); //Quebra de linha para que o loop seguinte se posicione abaixo das letras corretamente posicionadas

    //loops aninhados para impressão do tabuleiro e as linhas enumeradas
    for (int j = 0; j < 10; j++){
        printf("%2d ", j+1);
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
