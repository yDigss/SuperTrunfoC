#include <stdio.h>

int main() {

    int a = 10, b = 5;

    if (a > 0 || b > 0){
        printf("Pelo menos um dos numeros sao positivos\n");
    }
    else{
        printf("Os dois numeros sao negativo\n");
    }
}