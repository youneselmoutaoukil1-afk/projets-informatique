def statistiques_notes(notes):
    if len(notes) == 0:
        return (0.0, 0, 0, 0)
    
    somme = sum(notes)
    moyenne = somme / len(notes)
    
    mini = min(notes)
    maxi = max(notes)
    
    nb_admis = 0
    for note in notes:
        if note >= 10:
            nb_admis += 1
    return (moyenne, mini, maxi, nb_admis)
