#include <iostream>
#include <cmath>
using namespace std;

class point {
private:
   
    float r;  
    float th; 

public:
    point(float abs, float ord) {
        r = sqrt(abs * abs + ord * ord);
        th = atan2(ord, abs);
    }

    void deplace(float dx, float dy) {
        float x = r * cos(th) + dx;
        float y = r * sin(th) + dy;
       
        r = sqrt(x * x + y * y);
        th = atan2(y, x);
    }

    float abscisse() { return r * cos(th); }
    float ordonnee() { return r * sin(th); }

    void homothetie(float rapport) {
        r *= rapport;
        if (r < 0) { 
            r = -r;
        }
    }
    void rotation(float angle) {
        th += angle;
    }
    float rho() { return r; }
    float theta() { return th; }
};

int main() {
   
    point p(3.0, 4.0);
    cout << "Point initial : (" << p.abscisse() << ", " << p.ordonnee() << ")" << endl;
    
    p.rotation(3.14159 / 2); 
    cout << "Apres rotation : (" << p.abscisse() << ", " << p.ordonnee() << ")" << endl;
    
    cout << "Coordonnees polaires - rho: " << p.rho() << ", theta: " << p.theta() << endl;

    return 0;
}