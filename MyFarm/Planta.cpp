#include "Planta.h"
#include <iostream>
using namespace std;

Planta::Planta(string n, int t, int p, pair<int, int> pret)
    : nume(n), timp_crestere(t), puncte_recoltare(p), pret_interval(pret) {}

string Planta::getNume() const { return nume; }
int Planta::getPuncteRecoltare() const { return puncte_recoltare; }
pair<int, int> Planta::getPret() const { return pret_interval; }
