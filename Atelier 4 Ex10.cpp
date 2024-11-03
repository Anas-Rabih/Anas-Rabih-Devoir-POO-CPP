#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

    string dateHeure;

    cout << "Entrez la date et l'heure (JJMMAAAAHHNN) : ";
    cin >> dateHeure;

    if (dateHeure.length() != 12) {
        cout << "Format de date et d'heure invalide. Assurez-vous d'utiliser JJMMAAAAHHNN." << endl;
        return 1;
    }

    // Extrait les différents champs
    string jour = dateHeure.substr(0, 2);
    string mois = dateHeure.substr(2, 2);
    string annee = dateHeure.substr(4, 4);
    string heure = dateHeure.substr(8, 2);
    string minute = dateHeure.substr(10, 2);
    
    int n=stoi(mois);
    

     switch (n)
     {
     case 1:
     cout<<jour<<" Janvier "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 2:
     cout<<jour<<" Fevrier "<<annee<<" a "<<heure<<"h"<<minute;
         break; 
     case 3:
     cout<<jour<<" Mars "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 4:
     cout<<jour<<" Avril "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 5:
     cout<<jour<<" Mai "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 6:
     cout<<jour<<" Juin "<<annee<<"a "<<heure<<"h"<<minute;
         break;
     case 7:
     cout<<jour<<" Juillet "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 8:
     cout<<jour<<" Aout "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 9:
     cout<<jour<<" Septembre "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 10:
     cout<<jour<<" Octobre "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 11:
     cout<<jour<<" novembre "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 12:
     cout<<jour<<" Decembre "<<annee<<" a "<<heure<<"h"<<minute;
         break;                                        
    
     default:
         break;
     }

    return 0;
}
