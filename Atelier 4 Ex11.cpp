#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Traitement {
private:
    vector<int> vecteur;

public:
    Traitement() {
        vecteur.reserve(15);
    }

    void Initialise() {
        vecteur.clear();
        int nombre;
        while (vecteur.size() < 15) {
            cout << "Veuillez saisir un entier pair non nul : ";
            cin >> nombre;

            if (nombre <= 0 || nombre % 2 != 0) {
                cout << "Erreur : Veuillez saisir un entier pair non nul." << endl;
            } else {
                vecteur.push_back(nombre);
            }
        }
    }

    void show() const {
        showRec(0);
    }

private:
    void showRec(size_t index) const {
        if (index < vecteur.size()) {
            cout << vecteur[index] << " ";
            showRec(index + 1);
        } else {
            cout << endl;
        }
    }

    friend double moyenne(const Traitement& t);
    friend double mediane(const Traitement& t);
};

double moyenne(const Traitement& t) {
    double sum = 0;
    for (int val : t.vecteur) {
        sum += val;
    }
    return sum / t.vecteur.size();
}

double mediane(const Traitement& t) {
    vector<int> sorted_vec = t.vecteur;
    sort(sorted_vec.begin(), sorted_vec.end());
    size_t size = sorted_vec.size();
    
    if (size % 2 == 0) {
        return (sorted_vec[size / 2 - 1] + sorted_vec[size / 2]) / 2.0;
    } else {
        return sorted_vec[size / 2];
    }
}

int main() {
    Traitement t;  // Utilisation de l'allocation automatique
    t.Initialise();
    cout << "Les éléments du vecteur sont : ";
    t.show();
    cout << "La moyenne est : " << moyenne(t) << endl;
    cout << "La médiane est : " << mediane(t) << endl;

    return 0;
}
