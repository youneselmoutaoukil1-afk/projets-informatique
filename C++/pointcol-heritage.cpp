#include <iostream>
#include "point.h"
using namespace std;
  class pointcol : public point
  { short couleur ;
 public :
    void coore (short cl)
{ couleur = cl ;}
 void affichec ();
void initialisec (int,int ,short);};
void pointcol::affichec ()
{ affiche ();
  cout<<"et ma couleur est :"<< couleur ;}
  void pointcol::initialisec (int abs ,int ord , short cl)
  { initialise (abs ,ord);
couleur = cl;
  }
