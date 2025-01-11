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
    Ferma ferma;

public:
    Game(string nume);
    void afisareInfo() const;
};

#endif
