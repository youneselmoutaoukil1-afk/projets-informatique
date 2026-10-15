def activation_seuil (somme, seuil):
    if somme >= seuil :
        return 1
    else:        
        return 0
    
        print ( activation_seuil (3.5 , 2.0) ) 
2       print ( activation_seuil (1.2 , 2.0) ) 
3       print ( activation_seuil (2.0 , 2.0) )

   def neurone(entrees, poids, seuil)
    somme = 0
    for i in range (len(entrees)):
        somme += entrees[i] * poids[i]
    return activation_seuil (somme, seuil)

entrees = [1.0, 0.5, 0.8]
poids = [0.4, 0.6, 0.9]
seuil = 1.0

print(neurone(entrees, poids, seuil)) 
