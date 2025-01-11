#ifndef FERMA_H
#define FERMA_H

#include <string>
#include <vector>
using namespace std;

class Ferma {
private:
    vector<string> terenuri; // Vector de Teren
    double bani;

public:
    Ferma();
    void adaugaTeren(const string& teren);
    void adaugaPuncte(int p);
    void verificaNivel();
    void afisareInfo() const;
};

#endif
