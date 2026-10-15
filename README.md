# 📚 Projets informatiques — C, C++, Python, Web

Recueil de mes travaux pratiques réalisés en **Génie Informatique à l'EST**, organisés par langage.

![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=cplusplus&logoColor=white)
![Python](https://img.shields.io/badge/Python-3776AB?style=flat&logo=python&logoColor=white)
![HTML5](https://img.shields.io/badge/HTML5-E34F26?style=flat&logo=html5&logoColor=white)

## 📁 Organisation

### 🔵 [C/](C) — Algorithmique & structures de données
| Fichier | Sujet |
|---|---|
| `tri-par-selection.c` | Tri par sélection d'un tableau |
| `recherche-sequentielle.c` | Recherche séquentielle |
| `min-max-tableau.c`, `tableau-somme-moyenne.c` | Parcours de tableaux |
| `liste-chainee-*.c` | Listes simplement chaînées (création, affichage) |
| `liste-doublement-chainee*.c`, `ldc-*.c` | Listes doublement chaînées (création de nœuds, insertion en queue) |
| `pile-ldc-structures.c` | Pile implémentée avec une liste doublement chaînée |
| `gestion-stock.c` | Mini gestion de stock (tableaux et chaînes) |
| `jeu-de-cartes.c` | Représentation et affichage d'un jeu de cartes |

### 🟣 [C++/](C++) — Programmation orientée objet
| Fichier | Sujet |
|---|---|
| `point-*.cpp` | Classe `Point` : coordonnées cartésiennes / polaires, déplacement |
| `vecteur3d-*.cpp` | Classe `vecteur3d` : constructeurs, opérations, comparaison, fonctions statiques |
| `vecteur-matrice.cpp` | Classes `Vect` et `Matrice`, fonctions amies |
| `vecteur-homothetie.cpp` | Méthodes membres et homothétie |
| `pointcol-heritage.cpp` | Héritage : `pointcol` dérivée de `point` |
| `employe-prime.cpp` | Classe `Employe` et calcul de prime |

### 🟡 [Python/](Python) — Bases, data & IA
| Fichier | Sujet |
|---|---|
| `tp1-ex1-neurone-artificiel.py` | Neurone artificiel et fonction d'activation à seuil |
| `tp1-ex2-normalisation.py` | Min, max et normalisation d'une liste |
| `tp1-ex3-formater-prix.py` | Fonctions et paramètres par défaut |
| `tp1-ex4-statistiques-notes.py`, `statistiques-notes-v2.py` | Statistiques sur des notes |
| `fonction-sigmoide.py` | Tracé de la fonction sigmoïde (Matplotlib) |
| `nuage-de-points-classes.py` | Nuage de points de deux classes (NumPy / Matplotlib) |
| `traitement-image.py` | Traitement d'image (niveaux de gris) |
| `conditions-if-elif.py`, `listes-2d.py` | Bases du langage |

### 🟠 [Web/](Web)
| Fichier | Sujet |
|---|---|
| `calculatrice.html` | Calculatrice simple en HTML / CSS / JavaScript |

## ▶️ Compiler et exécuter

```bash
# C
gcc C/tri-par-selection.c -o tri && ./tri

# C++
g++ C++/point-polaire.cpp -o point && ./point

# Python
python Python/fonction-sigmoide.py
```

## 👤 Auteur

**Youness El Moutaouakkil** — Étudiant en Génie Informatique à l'EST (École Supérieure de Technologie)
