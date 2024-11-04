#include<iostream>

using namespace std;

class NombreComplex{

private:
    double reel;
    double imaginaire; 

public:    
   NombreComplex(){};
   NombreComplex(double m_reel,double m_imaginaire){
       reel=m_reel;
       imaginaire=m_imaginaire;
 }
  

   void operator+(NombreComplex a){
      double resultReal = reel + a.reel;
      double resultImaginaire= imaginaire + a.imaginaire;
        cout << resultReal << " + " << resultImaginaire << "i" << endl;
    }
    void operator*(NombreComplex a){
      double resultReal = (reel * a.reel)-(imaginaire*a.imaginaire);
      double resultImaginaire =(reel*a.imaginaire) +(imaginaire*a.reel);
      cout << resultReal << " * " << resultImaginaire << "i" << endl;
    }
      void operator-(NombreComplex a){
    double resultReal = reel - a.reel;
     double resultImaginaire = imaginaire - a.imaginaire;
    cout << resultReal << " - " << resultImaginaire << "i" << endl;
    }
     void operator/(NombreComplex a){
     double denominator = a.reel * a.reel + a.imaginaire * a.imaginaire;
     double resultReal = (reel * a.reel + imaginaire * a.imaginaire) / denominator;
     double resultImaginaire = (imaginaire * a.reel - reel * a.imaginaire) / denominator;
      cout << resultReal << " - " << resultImaginaire << "i" << endl;
     }


};

int main (){
    double real1, imaginaire1, real2, imaginaire2;
int choix;
    cout << "Entrez la partie reelle du premier nombre complexe : ";
    cin >> real1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> imaginaire1;

    cout << "Entrez la partie reelle du deuxieme nombre complexe : ";
    cin >> real2;
    cout << "Entrez la partie imaginaire du deuxieme nombre complexe : ";
    cin >> imaginaire2;

    NombreComplex val1(real1, imaginaire1);
    NombreComplex val2(real2, imaginaire2);

    
    cout << "Menu : \n";
    cout << "1. Addition\n";
    cout << "2. Soustraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Choisissez une operation (1/2/3/4) : ";
    cin >> choix;

    switch (choix) {
        case 1:
            val1+val2;
            break;
        case 2:
            val1-val2;
            break;
        case 3:
            val1*val2;
            break;
        case 4:
           val1/val2;
            break;
        default:
        cout << "Choix non valide." <<endl;
            return 1;
    }
   return 0;
}


