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

    //loop para definir posição do barco Horizontal (Linha 9, Colunas B até D)
    for (int j = 1; j <= 3; j++)
    {
        tabuleiro[j][8] = 3;
    }

    //loop para definir posição do barco Vertical (Coluna D, linhas 2 até 4)  
    for (int i = 1; i <= 3; i++)
    {
        tabuleiro[3][i] = 3;
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
