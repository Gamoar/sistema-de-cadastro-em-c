#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char type[15];
    char brand[10];
    char specs[20];
    float price;
}perifericos;



int main(){
    
    int n;
    
    printf("Quantos registro serão criados: ");
    scanf("%d", &n);

    perifericos *produto =(perifericos*)malloc(n*sizeof(perifericos));

    for (int i = 0; i < n; i++){

        printf("\nProduto %d\n", i+1);
        printf("Qual o nome do produto %d: ", i + 1);
        scanf(" %[^\n]", produto[i].type);

        printf("Qual a marca do produto %d: ", i + 1);
        scanf(" %[^\n]", produto[i].brand);

        printf("Qual as especificações do produto %d: ", i + 1);
        scanf(" %[^\n]", produto[i].specs);

        printf("Qual o preço do produto %d: ", i + 1);
        scanf("%f", &produto[i].price);

    }
    for (int i = 0; i < n; i++){
        printf("\nA %s %s %s esta por R$%.2f \n", produto[i].type, produto[i].brand, produto[i].specs, produto[i].price);
    }
    free(produto);

    return 0;
}