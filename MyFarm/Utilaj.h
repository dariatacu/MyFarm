#ifndef UTILAJ_H
#define UTILAJ_H

#include <string>
using namespace std;

class Utilaj {
private:
    string nume;
    double pret;
public:
    Utilaj(string n, double p);
    string getNume() const;
    double getPret() const;
};

#endif
