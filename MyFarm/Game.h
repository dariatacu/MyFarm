#ifndef GAME_H
#define GAME_H

#include <string>
#include "Ferma.h"
using namespace std;

class Game {
private:
    string nume_jucator;
    int nivel;
    int puncte;
    int bani;

public:
    Game(string nume,int& bani);
    void afisareInfo() const;

    void setBani(int bani);
};

#endif
