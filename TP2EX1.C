#include <stdio.h>
#include <stdlib.h>

typedef struct Element{
    int contenu;
    struct Element *suivant;
}Element;

void afficherListe(Element *L){
    Element *ptr = L;
    while(ptr != NULL){
        printf("%d -> ", ptr->contenu);
        ptr = ptr->suivant;
    }
    printf("NULL\n");
}

Element* createElement(int c){
    Element nv = (Element)malloc(sizeof(Element));
    nv->contenu = c;
    nv->suivant = NULL;
    return nv;
}