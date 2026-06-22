
void afficherCarte(Carte c) {
    if (c.valeur == 1) printf(" As%c ", c.symbole);
    else if (c.valeur == 11) printf("  V%c ", c.symbole);
    else if (c.valeur == 12) printf("  D%c ", c.symbole);
    else if (c.valeur == 13) printf("  R%c ", c.symbole);
    else printf(" %2d%c ", c.valeur, c.symbole);
}

void afficherColonne(Pile p) {
    Element* courant = p;
    while (courant != NULL) {
        afficherCarte(courant->carte);
        courant = courant->suivant;
    }
    printf("\n");
}

int main() {

    Pile colonnes[8];
    int i;
    
    for(i = 0; i < 8; i++) {
        colonnes[i] = initialiserPile();
    }
    Carte valetCoeur = {11, 'C'};
    Carte cinqPique = {5, 'P'};
    Carte roiTrefle = {13, 'T'};
    Carte asCarreau = {1, 'K'};

    colonnes[0] = empiler(colonnes[0], valetCoeur);
    colonnes[0] = empiler(colonnes[0], cinqPique);

    colonnes[1] = empiler(colonnes[1], roiTrefle);
    colonnes[1] = empiler(colonnes[1], asCarreau);

    printf("--- JEU FREECELL (Affichage des colonnes) ---\n");
    for(i = 0; i < 8; i++) {
        printf("Colonne %d : ", i + 1);
        if (colonnes[i] == NULL) {
            printf("[Vide]");
        } else {
            afficherColonne(colonnes[i]);
        }
    }

    return 0;
}