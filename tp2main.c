
#include <stdio.h>
#include <string.h>

void initStock(int code[], char designation[][20], int stock[]) {
    code[0] = 1; strcpy(designation[0], "Stylo"); stock[0] = 50;
    code[1] = 2; strcpy(designation[1], "Cahier"); stock[1] = 30;
    code[2] = 3; strcpy(designation[2], "Clavier"); stock[2] = 10;
    code[3] = 4; strcpy(designation[3], "Souris"); stock[3] = 20;
    code[4] = 5; strcpy(designation[4], "USB"); stock[4] = 15;
}
int rechercherProduit(int code[], int n, int c) {
    int i;
    for (i = 0; i < n; i++) {
        if (code[i] == c) return i;
    }
    return -1;
}
int main() {
    int codes[5], stocks[5];
    char desigs[5][20];
    int n = 5;
    initStock(codes, desigs, stocks);
    int codeSaisi, qteVendue, pos;
    printf("Entrer le code du produit : ");
    scanf("%d", &codeSaisi);
    pos = rechercherProduit(codes, n, codeSaisi);
    if (pos != -1) {
        printf("Designation : %s\n", desigs[pos]);
        printf("Stock actuel : %d\n", stocks[pos]);
        printf("Entrer la quantite vendue : ");
        scanf("%d", &qteVendue);
        if (qteVendue <= stocks[pos]) {
            stocks[pos] = stocks[pos] - qteVendue;
            printf("Nouveau stock : %d\n", stocks[pos]);
        } else {
            printf("Stock insuffisant !\n");
        }
    } else {
        printf("Produit non trouve.\n");
    }
    return 0;
}