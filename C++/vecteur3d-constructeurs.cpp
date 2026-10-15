#include <iostream>
using namespace std;

class vecteur3d_a {
    float x, y, z; 
public:
    vecteur3d_a() { 
        x = 0; y = 0; z = 0; 
    }
    vecteur3d_a(float c1, float c2, float c3) { 
        x = c1; y = c2; z = c3; 
    }
};

class vecteur3d {
    float x, y, z;
public:
    vecteur3d(float c1 = 0, float c2 = 0, float c3 = 0) {
        x = c1; y = c2; z = c3;
    }
    void afficher() { 
        cout << "x=" << x << " y=" << y << " z=" << z << endl; 
    }
};
int main() {
    vecteur3d v1; 
    vecteur3d v2(1.5, 2.5, 3.5); 
    
    v1.afficher();
    v2.afficher();
    return 0;
}
