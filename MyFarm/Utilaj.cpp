#include "Utilaj.h"

Utilaj::Utilaj(string n, double p) : nume(n), pret(p) {}

string Utilaj::getNume() const { return nume; }
double Utilaj::getPret() const { return pret; }
