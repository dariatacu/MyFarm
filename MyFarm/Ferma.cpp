#include "Ferma.h"
#include <iostream>
using namespace std;

Ferma::Ferma() : bani(2000.0) {}

void Ferma::adaugaTeren(const string& teren) {
    terenuri.push_back(teren);
}

void Ferma::adaugaPuncte(int p) {
    // Logica de adăugare a punctelor
}

void Ferma::verificaNivel() {
    // Logica de verificare a nivelului
}

void Ferma::afisareInfo() const {
    cout << "Ferma are " << terenuri.size() << " terenuri si " << bani << " bani disponibili." << endl;
}
