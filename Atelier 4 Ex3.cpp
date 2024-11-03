#include <iostream>
using namespace std;

class Personne {
private:
    string nom;
    string prenom;
    int dn; // date de naissance

public:
    Personne() {
        nom = "";
        prenom = "";
        dn = 0;
    }

    Personne(string n, string p, int d) {
        nom = n;
        prenom = p;
        dn = d;
    }

    void afficher() {
        cout << "Le nom et prénom sont : " << nom << " " << prenom << ". Il est né en " << dn << endl;
    }
};

class Employe : public Personne {
private:
    int salaire;

public:
    Employe() {
        salaire = 0;
    }

    Employe(string n, string p, int d, int sal) : Personne(n, p, d) {
        salaire = sal;
    }

    void afficher() {
        Personne::afficher();
        cout << "Son salaire est de : " << salaire << endl;
    }
};

class Chef : public Employe {
private:
    string service;

public:
    Chef() {
        service = "";
    }

    Chef(string n, string p, int d, string ser, int sal) : Employe(n, p, d, sal) {
        service = ser;
    }

    void afficher() {
        Employe::afficher();
        cout << "Service occupé : " << service << endl;
    }
};

class Directeur : public Chef {
private:
    string societe;

public:
    Directeur(string n, string p, int d, string ser, int sal, string soc) : Chef(n, p, d, ser, sal) {
        societe = soc;
    }

    void afficher() {
        Chef::afficher();
        cout << "Il appartient à la société : " << societe << endl;
    }
};

int main() {
    Personne pers("Anas", "senhaji", 2003);
    pers.afficher();
    Employe emp("Anas", "senhaji", 2003, 10000000);
    emp.afficher();
    Directeur dir("Anas", "senhaji", 2003, "Développement", 10000000, "Microsoft");
    dir.afficher();
    return 0;
}
