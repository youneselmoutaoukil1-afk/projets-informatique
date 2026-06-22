
def minimum(liste):
    min = liste[0] 
    for element in liste:
        if element < min:
            min = element 
    return min

def maximum(liste):
    
    max = liste[0]
    for element in liste:
        if element > max:
            max = element
    return max
  def normaliser(liste):
    min = minimum(liste)
    max = maximum(liste)
    liste_norm = []
    
    for x in liste:
        if max != min:
            x_norm = (x - min) / (max - min)
        else:
            x_norm = 0.0
            
        liste_norm.append(x_norm)
        
    return liste_norm
   donnees = [15 , 30 , 45 , 60 , 75 , 90]
    print ( normaliser ( donnees ))