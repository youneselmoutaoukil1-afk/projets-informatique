#include <iostream>
using namespace std;

class vecteur3d {
    float x, y, z;
public:
    vecteur3d(float c1=0, float c2=0, float c3=0) {
        x = c1; y = c2; z = c3;
    }
    void afficher() {
        cout << "<" << x << ", " << y << ", " << z << ">" << endl;
    }
    vecteur3d somme(vecteur3d& v) {
        vecteur3d res;
        res.x = x + v.x;
        res.y = y + v.y;
        res.z = z + v.z;
        return res;
    }
    float produit_scalaire(vecteur3d& v) {
        return (x * v.x) + (y * v.y) + (z * v.z);
    }
};
int main() {
    vecteur3d v1(1, 2, 3);
    vecteur3d v2(4, 5, 6);
    
    cout << "V1 : "; v1.afficher();
    cout << "V2 : "; v2.afficher();
    
    vecteur3d v3 = v1.somme(v2);
    cout << "Somme : "; v3.afficher();
    
    float p = v1.produit_scalaire(v2);
    cout << "Produit scalaire : " << p << endl;
    return 0;
}
