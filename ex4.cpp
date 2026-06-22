#include <iostream>
#include <cmath>
using namespace std;

 class vecteur3d {
   float x,y,z;
    public : 
     vecteur3d (float c1 = 0.0 , float c2=0.0 , float c3=0.0)
     {
      x = c1 ; y = c2 ;z=c3;
   

     }
     static vecteur3d normax(vecteur3d v1,vecteur v2){
      int A=sqrt (x*x+y*y+z*z);
    int C=sqrt(B.x*B.x+B.y*B.y+B.z*B.z);
    
   }
  if (A > B)return * this;
  
   else return B;
 void afficher(){
   cout << "("<< x << ","<< y << "," << z << ")" << endl ;
 }
 };
 int main(){
   vecteur3d v1(1,2,3);
   vecteur3d v2(4,5,6);
    vecteur3d v3;
    v3 = vecteur3d::normax(v1,v2);
     cout << "vecteur qui afficher le plus grand norme :" ;
     v3.afficher();
      return 0 ;

 }