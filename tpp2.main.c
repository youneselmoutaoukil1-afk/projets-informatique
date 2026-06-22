void insererQueue(LDC* l, int val) {
    if (l == NULL) return;
    Noeud* nouveau = creerNoeud(val);
    if (l->tete == NULL) { 
        l->tete = nouveau;
        l->queue = nouveau;
    } else {
        nouveau->prev = l->queue;
        l->queue->next = nouveau;
        l->queue = nouveau;
    }
}