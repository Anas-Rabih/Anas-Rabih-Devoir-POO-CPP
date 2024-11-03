#include <iostream>
#include <cstring>

class Fichier {
private:
    char* P;  // Pointeur vers la mémoire allouée
    size_t longueur;  // Longueur en nombre d'octets

public:
    // Constructeur
    Fichier(size_t taille) {
        P = new char[taille];
        longueur = taille;
    }

    // Méthode pour allouer un espace à partir du pointeur P
    void Creation(size_t taille) {
        P = new char[taille];
        longueur = taille;
    }

    // Méthode pour remplir arbitrairement l'espace mémoire
    void Remplit() {
        if (P != nullptr) {
            for (size_t i = 0; i < longueur; i++) {
                P[i] = 'A' + (i % 26);  // Remplissage arbitraire
            }
        }
    }

    // Méthode pour afficher la zone mémoire pointée par P
    void Affiche() {
        if (P != nullptr) {
            for (size_t i = 0; i < longueur; i++) {
                std::cout << P[i];
            }
            std::cout << std::endl;
        }
    }

    // Destructeur
    ~Fichier() {
        delete[] P;
    }
};

int main() {
    size_t taille = 10;  // Taille du fichier (en octets)

    // Instanciation de la classe par 'new'
    Fichier* fichier = new Fichier(taille);

    // Appel des méthodes
    fichier->Remplit();
    fichier->Affiche();

    // Suppression de l'objet par 'delete'
    delete fichier;

    return 0;
}
