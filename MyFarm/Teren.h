#pragma once
#ifndef TEREN_H
#define TEREN_H

#include "Planta.h"

class Teren {
private:
    int id;
    bool ocupat;
    Planta* planta_curenta;
public:
    Teren(int id_teren);
    void planteaza(Planta* planta);
    void recolteaza();
};

#endif
