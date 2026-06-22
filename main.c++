#include <iostream>
using namespace std;

class point {
private:
    float x;
    float y;

public:
    point(float abs, float ord) {
        x = abs;
        y = ord;
    }

    void deplace(float dx, float dy) {
        x += dx;
        y += dy;
    }
    void affiche() {
        cout << "Coordonnees : (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    
    point p(2.0, 3.5);
    
    cout << "Avant deplacement : ";
    p.affiche();
    
    p.deplace(1.5, -1.0);
    
    cout << "Apres deplacement : ";
    p.affiche();
    
    return 0;
}