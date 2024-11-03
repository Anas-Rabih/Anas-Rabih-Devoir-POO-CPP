
#include <iostream>
#include<cmath>

using namespace std;

class Complexe{
public:

        int reelle1,reelle2; 
        int imaginaire1,imaginaire2;

      Complexe(int,int,int,int);
      void addition(){
             int SR,SM;
              SR=reelle1 +reelle2;
              SM=imaginaire1 +imaginaire2;
        cout<<"la somme de deux nombre complexe est :"<<SR<<"+"<<SM<<"i"<<endl;

                      }

       void soustraction() {
             int SR,SM;
             SR=reelle1 - reelle2;
             SM=imaginaire1 - imaginaire2;
         cout<<"la soustraction de deux nombre complexe est :"<<SR<<" +("<<SM<<")i"<<endl;}

       void multiplication() {
         int SR,SM;
   SR= reelle1*reelle2 - imaginaire2*imaginaire1;
   SM= reelle1*imaginaire2 + imaginaire1*reelle2;
   cout<<"la multiplication de deux nombre complexe est :"<<SR<<" + "<<SM<<"i"<<endl;

}

    void division() {
     if (reelle2 == 0 && imaginaire2 == 0) {
        cout << "Erreur : division par zéro." << endl;
        return;
    }
    double denom = reelle2 * reelle2 + imaginaire2 * imaginaire2;
    double SR = (reelle1 * reelle2 + imaginaire1 * imaginaire2) / denom;
    double SM = (imaginaire1 * reelle2 - reelle1 * imaginaire2) / denom;
    cout << "La division des deux nombres complexes est : " << SR << " + (" << SM << ")i" << endl;

                   }
};

Complexe::Complexe(int a,int b,int c,int d){
    reelle1=a;
    imaginaire1=b;
    reelle2=c;
    imaginaire2=d;

}
int main() {

int reelle1,reelle2,imaginaire1,imaginaire2;
int choix;


    cout << "\t  Effectuer les opérations arithmétiques sur des nombres complexes";

cout<<endl<<"Donne  la partie reelle du 1er nombre complexe  :";
   cin>>reelle1;
cout<<endl<<"Donne  la partie imaginaire du 1er nombre complexe  :";
    cin>>imaginaire1;
cout<<endl<<"Donne  la partie reelle du 2eme nombre complexe  :";
     cin>>reelle2;
cout<<endl<<"Donne  la partie imaginaire du 2eme nombre complexe  :";
     cin>>imaginaire2;

 Complexe c1(reelle1,imaginaire1,reelle2,imaginaire2);

 cout<<"\n1er nombre complexe : "<<reelle1<<" + "<<imaginaire1<<"i"<<endl;
 cout<<"2ème nombre complexe :  "<<reelle2<<" + "<<imaginaire2<<"i"<<endl;

cout<<"\nChoisissez l'opération à effectuer :"<<endl;
cout<<"1-addition"<<endl
     <<"2-soustraction"<<endl
     <<"3-multiplication"<<endl
     <<"4-division"<<endl
     <<"5-Quitter"<<endl;
    cout << "Votre choix (1/2/3/4/5) : ";
    cin >>choix;
switch(choix){
    case 1:  c1.addition();
        break;
    case 2: c1.soustraction();
        break; 
    case 3: c1.multiplication();
        break;
    case 4: c1.division();
        break;
    case 5: cout<<"Vous avez quitté."<<endl;
        break;
    default: cout<<"Erreur : choix invalide."<<endl;
        break;
}

    return 0;
}
