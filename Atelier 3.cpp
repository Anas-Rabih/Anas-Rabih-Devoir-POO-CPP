#include<iostream>
#include<string>
using namespace std;

class voiture{
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;
 public:
  void valeursParDefaut(){
    marque="inconnu" ;
    modele="inconnu";
    annee=0;
    kilometrage=0.0;
    vitesse=0.0;
}
 void addValeurs(){
    string mar; string mod;
    int an;float klmtg;float vts;

    cout<<endl<<"Entre la marque de lavoiture: ";
     cin>>mar;
         cout<<"Entre le modele de la  voiture: ";
     cin>>mod;
         cout<<"Entre l'annee de la voiture: ";
     cin>>an;
         cout<<"Entre le kilometrage de la voiture: ";
     cin>>klmtg;
         cout<<"Entre la vitesse de la voiture: ";
     cin>>vts;

    marque=mar ;
    modele=mod;
    annee=an;
    kilometrage=klmtg;
    vitesse=vts;
}
 float accelerer(float valeur){ vitesse = valeur+vitesse; return vitesse;}

  float freiner(float valeur){
    vitesse=vitesse - valeur;
   if(vitesse<0) vitesse=0;
    else return vitesse ;
}
void afficherInfo(){
    cout<<"\tles informations de la voiture "<<endl
    <<" Marque:"<<marque<<endl
    <<" Modele:"<<modele<<endl
    <<" Annee:"<<annee<<endl
    <<" Kilometrage:"<<kilometrage<<endl
    <<" Vitesse:"<<vitesse<<endl;

}
float avancer(float distance){ kilometrage=distance + kilometrage; return kilometrage;}

void destructeur(){ cout<<"La voiture est detruite."<<endl;}

};
int main(){
    voiture V1;
    V1.valeursParDefaut();
    V1.afficherInfo();

    V1.addValeurs();
    V1.afficherInfo();

    V1.accelerer(20.0);
    V1.freiner(10.0);
    V1.afficherInfo();

    V1.avancer(50.0);
    V1.afficherInfo();
    int choix;
cout<<"Voulez-vous augmenter la vitesse a 200 \? Entrez 1 pour oui et 0 pour non."<<endl;
cin>>choix;
if(choix==1)
    {V1.destructeur();  }
else cout<<"Okay";
return 0;}
