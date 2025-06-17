#include <stdio.h>

/*int main(){
    /* Desafios novato e aventureiro
    // criação de variaveis
    int casatorre = 5;
    int casabispo = 5;
    int casarainha = 8;
    int bispo = 1;
    int rainha = 1;
    int cavalobaixo = 2;
    int cavaloesquerda = 1;

    // Movimento Torre com repetição for
    
    printf("Movimento da Torre\n");
    for(int i = 1; i <= casatorre; i++)
    {
        printf("Direita\n");
    }

    // Movimento do Bispo com repetição while

    printf("Movimento do Bispo\n");
    while(bispo <= casabispo)
    {
        printf("Cima Direita\n");
        bispo++;
    }

    // Movimento da Rainha com repetição do-while

    printf("Movimento da Rainha\n");
    do{
        printf("Esquerda\n");
        rainha++;
       }while(rainha <= casarainha);



       // Movimento do Cavalo com loops aninhados

       printf("Movimento do Cavalo\n");
       for(int i = 0; i< cavalobaixo; i++)
       {
        printf("Baixo\n");

        if(i == cavalobaixo - 1)
        {
            int j =0;
            while(j < cavaloesquerda){
                printf("Esquerda\n");
                j++;
            }
        }
       }
            
       

        return 0;
 
 //Fim dos desafios novato e aventureiro 
 
 return 0;
} */

// Desafio nivel Mestre

// Função recursiva Torre
void movertorre(int casas)
{
    if(casas == 0) return;
    printf("Direita\n");
    movertorre(casas - 1);
}

// Função recursiva Bispo
void moverbispo(int casas, int movimentovertical)
{
    if(casas == 0) return;
    printf("Cima Direita\n");
    moverbispo(casas - 1, movimentovertical + 1);
}

// Função recursiva Rainha
void moverrainha(int casas)
{
    if(casas == 0) return;
    printf("Esquerda\n");
    moverrainha(casas - 1);
}

int main(){
    // Movimento da Torre
    printf("Mvimento da Torre\n");
    movertorre(5);

    //Movimento do Bispo com recursividade e loops aninhados
    printf("Movimento do Bispo\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("Cima Direita\n");
        }
    }

    // Movimento da Rainha
    printf("Movimento da Rainha\n");
    moverrainha(8);

    // Movimento do Cavalo com loops complexos
    printf("Movimento do Cavalo\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }for(int j =0; j < 1; j++)
    {
        printf("Direita\n");
        continue;
    }
    
return 0;
    

}
 



