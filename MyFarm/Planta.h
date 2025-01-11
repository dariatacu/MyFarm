#ifndef PLANTA_H
#define PLANTA_H

#include <string>
using namespace std;

class Planta {
private:
    string nume;
    int timp_crestere;
    int puncte_recoltare;
    pair<int, int> pret_interval;
public:
    Planta(string n, int t, int p, pair<int, int> pret);
    string getNume() const;
    int getPuncteRecoltare() const;
    pair<int, int> getPret() const;
};

#endif
