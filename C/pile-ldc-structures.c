#include <stdio.h>
#include <stdlib.h>

typedef struct Noeud {
    int val;
    struct Noeud* prev;
    struct Noeud* next;
} Noeud;

typedef struct LDC {
    Noeud* tete;
    Noeud* queue;
} LDC;
typedef struct Pile {
    Noeud
}
