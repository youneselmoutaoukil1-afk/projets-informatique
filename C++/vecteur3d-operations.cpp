#include <iostream>
using namespace std;

class vecteur3d {
    float x, y, z;
public:
    vecteur3d(float c1=0, float c2=0, float c3=0) { 
        x = c1; y = c2; z = c3; 
    }
    void afficher() { 
        cout << "vecteur: " << x << ", " << y << ", " << z << endl; 
    }
    float norme() { 
        return (x*x + y*y + z*z); 
    }
    vecteur3d normax_val(vecteur3d v) {
        if (norme() > v.norme()) return *this;
        else return v;
    }
    vecteur3d& normax_ref(vecteur3d& v) {
        if (norme() > v.norme()) return *this;
        else return v;
    }
    vecteur3d* normax_adr(vecteur3d* v) {
        if (norme() > v->norme()) return this;
        else return v;
    }
};
int main() {
    vecteur3d v1(1, 1, 1); 
    vecteur3d v2(2, 2, 2); 

    v1.normax_val(v2).afficher();
    v1.normax_ref(v2).afficher();
    v1.normax_adr(&v2)->afficher();

    return 0;
}
