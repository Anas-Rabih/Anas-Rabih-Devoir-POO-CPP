#include <iostream>

using namespace std;

struct Element {
    int data;
    Element* next;

    Element(int value) : data(value), next(nullptr) {}
};

class Liste {
private:
    Element* head;

public:
    Liste() : head(nullptr) {}

    // Méthode pour ajouter un élément au début de la liste
    void AjouterAuDebut(int value) {
        Element* nouvelElement = new Element(value);
        nouvelElement->next = head;
        head = nouvelElement;
    }

    // Méthode pour supprimer un élément au début de la liste
    void SupprimerAuDebut() {
        if (head) {
            Element* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Méthode pour afficher la liste en entier
    void AfficherListe() {
        Element* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Destructeur pour libérer la mémoire
    ~Liste() {
        while (head) {
            Element* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    Liste maListe;

    maListe.AjouterAuDebut(3);
    maListe.AjouterAuDebut(2);
    maListe.AjouterAuDebut(1);

    cout << "Liste : ";
    maListe.AfficherListe();

    maListe.SupprimerAuDebut();

    cout << "Liste apres suppression : ";
    maListe.AfficherListe();

    return 0;
}
