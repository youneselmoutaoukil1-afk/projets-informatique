#include <iostream>
using namespace std;

class vecteur3d {
    float x, y, z;
public:
    vecteur3d(float c1=0, float c2=0, float c3=0) { 
        x = c1; y = c2; z = c3; 
    }
    bool coincide_val(vecteur3d v) {
        if (x == v.x && y == v.y && z == v.z) return true;
        else return false;
    }
    bool coincide_adr(vecteur3d* v) {
        if (x == v->x && y == v->y && z == v->z) return true;
        else return false;
    }
    bool coincide_ref(vecteur3d& v) {
        if (x == v.x && y == v.y && z == v.z) return true;
        else return false;
    }
};
int main() {
    vecteur3d v1(1, 2, 3);
    vecteur3d v2(1, 2, 3);
    bool test1 = v1.coincide_val(v2);   
    bool test2 = v1.coincide_adr(&v2);  
    bool test3 = v1.coincide_ref(v2);  
     cout << "Test par valeur : " << test1 << endl;
    cout << "Test par adresse : " << test2 << endl;
    cout << "Test par reference : " << test3 << endl;
    return 0;
}
