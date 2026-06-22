#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int contenue;
    struct element* suivant;
} element;

int main() {
    element* elt1 = (element*) malloc(sizeof(element));
    
    elt1->contenue = 5;
    elt1->suivant = NULL;
    
    printf("le Contenue est : %d\n", elt1->contenue);
    
    free(elt1);
    
    return 0;
}





