notes = [15, 8, 12, 17, 6, 14, 9, 11]

def statistique_notes(notes):
  
    xbar = sum(notes) / len(notes);
    
    mini = min(notes)
    maxi = max(notes)

    admis = len([n for n in notes if n >= 10])
    
    return xbar, mini, maxi, admis
moy, mn, mx, adm = statistique_notes(notes)

print(f"Moyenne: {moy}")
print(f"Note l-asghar: {mn}")
print(f"Note l-akbar: {mx}")
print(f"3adad l-na-jihin: {adm}")
