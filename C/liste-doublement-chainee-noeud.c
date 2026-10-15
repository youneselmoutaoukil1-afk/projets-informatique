#include <stdio.h>
#include <stdlib.h>

typedef struct Noeud {
    int donnee;
    struct Noeud *suivant;
    struct Noeud *precedent; // Le champ supplémentaire !
} Noeud;
