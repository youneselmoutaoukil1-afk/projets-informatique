#include <iostream>
#include <cmath> 

using namespace std;

class Point {
private:
    float x;
    float y;

public:
    Point(float abs, float ord) {
        x = abs;
        y = ord;
    }
    float abscisse() { return x; }
    float ordonnee() { return y; }ة
    void deplace(float dx, float dy) {
        x += dx;
        y += dy;
    void homothetie(float rapp) {
        x *= rapp;
        y *= rapp;
    }
    void rotation(float angle) {
        float nouv_x = x * cos(angle) - y * sin(angle);
        float nouv_y = x * sin(angle) + y * cos(angle);
        x = nouv_x;  
        y = nouv_y; 
    }
    float rho() {
        return sqrt(x * x + y * y);
    }

    float theta() {
        return atan2(y, x);
    }
};

int main() {
    Point p(3.0, 4.0);

    cout << "Point initial : (" << p.abscisse() << ", " << p.ordonnee() << ")" << endl;

    p.deplace(1.0, -1.0);
    cout << "Apres deplacement : (" << p.abscisse() << ", " << p.ordonnee() << ")" << endl;

    p.homothetie(2.0);
    cout << "Apres homothetie (rapp 2) : (" << p.abscisse() << ", " << p.ordonnee() << ")" << endl;

    p.rotation(1.5708);
    cout << "Apres rotation : (" << p.abscisse() << ", " << p.ordonnee() << ")" << endl;

    cout << "Coordonnees polaires - Rho : " << p.rho() << ", Theta : " << p.theta() << " radians" << endl;

    return 0;
}
