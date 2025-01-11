#include "Teren.h"
#include <iostream>
using namespace std;

Teren::Teren(int id_teren) : id(id_teren), ocupat(false), planta_curenta(nullptr) {}

void Teren::planteaza(Planta* planta) {
    if (!ocupat) {
        planta_curenta = planta;
        ocupat = true;
        cout << "Planta " << planta->getNume() << " a fost plantata pe terenul " << id << endl;
    }
    else {
        cout << "Terenul este deja ocupat!" << endl;
    }
}

void Teren::recolteaza() {
    if (ocupat) {
        cout << "Recoltat " << planta_curenta->getNume() << " de pe terenul " << id << endl;
        ocupat = false;
        planta_curenta = nullptr;
    }
    else {
        cout << "Terenul este gol!" << endl;
    }
}
