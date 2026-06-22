#include <stdio.h>
#include <stdlib.h>
typedef struct Noeud {
    int val;
    struct Noeud* next;
    struct Noeud* prev;
} Noeud;
typedef struct LDC {
    Noeud* tete;
    Noeud* queue;
} LDC;
LDC* creerLDC() {
    LDC* l = (LDC*)malloc(sizeof(LDC));
    l->tete = NULL;
    l->queue = NULL;
    return l;
}   

void afficherAvant(LDC* l) {
    if (l == NULL || l->tete == NULL) {
        printf("Liste vide\n");
        return;
    }
    Noeud* temp = l->tete;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

void afficherArriere(LDC* l) {
    if (l == NULL || l->queue == NULL) {
        printf("Liste vide\n");
        return;
    }
    Noeud* temp = l->queue;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->prev;
    }
    printf("NULL\n");
}
void insererDebut(LDC* l, int val) {
    Noeud* nouveau = (Noeud*)malloc(sizeof(Noeud));
    nouveau->val = val;
    nouveau->next = l->tete;
    nouveau->prev = NULL;
    if (l->tete != NULL) {
        l->tete->prev = nouveau;
    }
    l->tete = nouveau;
    if (l->queue == NULL) {
        l->queue = nouveau;
    }
}
void insererFin(LDC* l, int val) {
    Noeud* nouveau = (Noeud*)malloc(sizeof(Noeud));
    nouveau->val = val;
    nouveau->next = NULL;
    nouveau->prev = l->queue;
    if (l->queue != NULL) {
        l->queue->next = nouveau;
    }
    l->queue = nouveau;
    if (l->tete == NULL) {
        l->tete = nouveau;
    }
}
int main() {
    LDC* maListe = creerLDC();
    insererFin(maListe, 101);
    insererFin(maListe, 102);
    insererDebut(maListe, 100); 

    printf("Affichage avant:\n");
    afficherAvant(maListe);
    printf("Affichage arrière:\n");
    afficherArriere(maListe);
    return 0;
}