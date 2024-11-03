#include <iostream>
#include <math.h>
using namespace std;

class Vecteur3d{
  private:
  float x,y,z;

  public:
  Vecteur3d():x(0.0),y(0.0),z(0.0){}
  Vecteur3d(float x, float y, float z):x(x),y(y),z(z){}
    void afficher(){
        cout << "("<<x<<","<<y<<","<<z<<")"<<endl;
    }
    Vecteur3d somme(Vecteur3d vect1){
        cout <<"la somme est:"<<endl;
        return Vecteur3d(vect1.x+x,vect1.y+y,vect1.z+z);
    }
    Vecteur3d produit(Vecteur3d vect1){
        cout << "le produit scalaire egale ="<<vect1.x*x+vect1.y*y+vect1.z*z<<endl;
         return Vecteur3d(vect1.x*x,vect1.y*y,vect1.z*z);
    }
    void coinside(Vecteur3d vect1){
        if(vect1.x==x && vect1.y==y && vect1.z==z){
            cout<< "les deux vecteur on les meme composant"<<endl;

        }else
            cout<< "les deux vecteur n'ont pas les mem composante"<<endl;
    }
    float norme(){
         float norme=sqrtf((x*x)+(y*y)+(z*z));
        cout << "la norme de ce vecteur est= "<<norme<<endl;
        return norme;
    }
    void normax(Vecteur3d vect2){
        if(norme() > vect2.norme()){
            cout<< "le vecteur 1 a la plus grand nome"<<endl;

        }else
            cout<< "le vecteur 2 a la plus grand nome"<<endl;
    }
};

int main() {
    Vecteur3d vect1(1,2,3),vect2(4,5,6);

    vect1.somme(vect2).afficher();
    vect1.produit(vect2);
    vect1.normax(vect2);

    return 0;
}
