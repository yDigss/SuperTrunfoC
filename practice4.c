#include <stdio.h>

#define LINHA 3
#define COLUNA 3

int main(){

    int matriz[LINHA][COLUNA];
    int target = 7;
    int found = 0;
    int soma = 1;

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);
        }

        printf("\n");

    }

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (matriz[i][j] == target)
            {
                printf("Alvo %d encontrado no indice {%d, %d}\n", target, i, j);
                found ++;
                printf("Total de alvos encontrados: %d", found);
                break;
            }
            
        }
        if (found) break;
                
    }
    if (!found)
    {
        printf("Alvo %d nao encontrado na matriz.", target);
    }
    
    

    return 0;
}