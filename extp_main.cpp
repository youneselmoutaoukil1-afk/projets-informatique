#include <iostream>
using namespace std;
class Matrice; 

class Vect {
private:
    double v[3]; 

public:
    Vect(double a, double b, double c) { 
        v[0] = a; v[1] = b; v[2] = c; 
    }
    void affiche() {
        cout << "Vecteur : [" << v[0] << ", " << v[1] << ", " << v[2] << "]" << endl;
    }
    friend Vect prod(Vect vec, Matrice mat);
};

class Matrice {
private:
    double m[3][3];

public:
    Matrice() {
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                m[i][j] = i + j + 1; 
    }
    friend Vect prod(Vect vec, Matrice mat);
};
Vect prod(Vect vec, Matrice mat) {
    Vect resultat; 
    for (int i = 0; i < 3; i++) {
        resultat.v[i] = 0;
        for (int j = 0; j < 3; j++) {
            resultat.v[i] += vec.v[j] * mat.m[j][i];
        }
    }
    return resultat;
}
int main() {
    Vect v(1, 2, 3);
    Matrice m;

    cout << "Solution 1" << endl;
    v.affiche();
    
    Vect resultat = prod(v, m); 
    cout << "Apres la multiplication : " << endl;
    resultat.affiche();

    return 0;
}