#EX3
def formater_prix(montant, devise="MAD",
decimales=2):
    return f"{montant:.{decimales}f} {devise}"
  print ( formater_prix (1500) )  
  print ( formater_prix (1500 , " EUR")) 
print ( formater_prix (1500 , " USD", 0) )

def inscrire_etudiant(nom, prenom, filiere="Informatique", niveau="L1", bourse=False):
    etudiant = {
        "nom": nom,
        "prenom": prenom,
        "filiere": filiere,
        "niveau": niveau,
        "bourse": bourse
    }
    return etudiant

e1 = inscrire_etudiant("Bennani", "Amina")
print(e1)

e2 = inscrire_etudiant("El Fassi", "Youssef", niveau="M1", bourse=True, filiere="Data Science")
print(e2)
