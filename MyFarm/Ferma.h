#ifndef FERMA_H
#define FERMA_H

#include <string>
#include <vector>
#include "Teren.h"
#include "Planta.h"

using namespace std;

class Ferma {

public:

    Ferma(const int& nivel,std::vector<Teren::NumarulTerenului>& terenuriAlese,int& baniInitiali);
    virtual ~Ferma();

    void adaugaTeren(Teren& terenAles);
	void arataTerenurile() const;
    void planteazaPeTeren();
	void recolteazaPeTeren();

	int getBani() const { return bani; }

	const std::vector<Teren>& getTerenuri() const { return terenuri; }
private:
    int nivel;
    int bani;

    vector<Teren> terenuri;
    vector<Teren::NumarulTerenului>& terenuriAlese;
};

#endif
