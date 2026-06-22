Noeud* creerNoeud(int val) {
    Noeud* nouveau = (Noeud*)malloc(sizeof(Noeud));
    if (nouveau != NULL) {
        nouveau->val = val;
        nouveau->prev = NULL;
        nouveau->next = NULL;
    }
    return nouveau;
}
