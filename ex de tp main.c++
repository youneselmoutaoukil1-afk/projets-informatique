#include <iostream>
using namespace std;

   class vecteur3d{
    float x,y,z;
    public :
    vecteur3d(float c1=0 , float c2=0 , float c3=0){
        x=c1 ; y=c2 ;z=c3;
    }
  int main(){
    vecteur3d A;
    vecteur3d E(2);
    vecteur3d N(3,2);
    vecteur3d M(3,2,5);
   
        return 0 ;
    
 }