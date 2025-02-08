#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[40];
    int populacao;
    float area;
    float pib;
} Cidade;

int main() {
    Cidade cidade1, cidade2;
    char criterio[20];


    printf("Cadastro da primeira cidade:\n");
    printf("Nome: ");
    scanf("%s", cidade1.nome);
    printf("População: ");
    scanf("%d", &cidade1.populacao);
    printf("Área (km²): ");
    scanf("%f", &cidade1.area);
    printf("PIB (bilhões): ");
    scanf("%f", &cidade1.pib);

    printf("\nCadastro da segunda cidade:\n");
    printf("Nome: ");
    scanf("%s", cidade2.nome);
    printf("População: ");
    scanf("%d", &cidade2.populacao);
    printf("Área (km²): ");
    scanf("%f", &cidade2.area);
    printf("PIB (bilhões): ");
    scanf("%f", &cidade2.pib);


    printf("\nEscolha o critério de comparação (populacao, area, pib): ");
    scanf("%s", criterio);


    printf("\nComparando as cidades...\n");

    if (strcmp(criterio, "populacao") == 0) {
        if (cidade1.populacao > cidade2.populacao)
            printf("A cidade vencedora é: %s (Maior população)\n, cidade1.nome");
        else
            printf("A cidade vencedora é: %s (Maior população)\n, cidade2.nome");    
    }
    else if (strcmp(criterio, "Area") == 0) {
        if (cidade1.area > cidade2.area)
            printf("A cidade vencedora é: %s (Maior área)\n", cidade1.nome);
        else 
            printf("A cidade vencedora é: %s (Maior área)\n", cidade2.nome);
    }
    else if (strcmp(criterio, "pib") == 0) {
        if (cidade1.pib > cidade2.pib)
            printf("A cidade vencedora é: %s (Maior PIB)\n", cidade1.nome);
        else
            printf("A cidade vencedora é: %s (Maior PIB)\n",cidade2.nome);
    }
    else {
        printf("critério inválido!\n");
    }
        
    return 0;

}
        
        
        
         





