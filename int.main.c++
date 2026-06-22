#include <iostream>
#include <string>
using namespace std;
 class Employe {
    private:
        string Nom;
        double Salaire;
        int Anciennete;
        public:
         Employe(string n,double s,int a){
            Nom=n;
            Salaire=s;
            Anciennete=a;
         }
         bool MeritePrime(int annees_min){
        }
    
if(Anciennete>=annees_min){
    return true;
}
else{ return false;
}
 double Augmentation(double P){
    double Augmenter=Salaire+(Salaire*P/100);
    return Augmenter;
 }
 void AfficherEmploye(){
    cout << "le Nom est : " << Nom << endl;
    cout << "le Salaire est : " << salaire << endl;
    cout << "L'Anciennete est : " << Anciennete << " ans" << endl;
 }
 int main