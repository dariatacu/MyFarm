
#ifndef PLANTA_H
#define PLANTA_H

#include <string>
#include <map>
using namespace std;

struct AtributePlanta {
    int costCumparare;
    int costVanzare;
    int timpCrestere;
    bool recoltare;
    int cantitate;

};

class Planta {
public:


    enum class TipulPlantei {
        GRAU,
        PORUMB,
        SOIA,
        MORCOVI,
        ROSII,
        CARTOFI,
        Invalid
    };

    Planta(TipulPlantei tipul_plantei, int cantitate);
    virtual ~Planta();

    static TipulPlantei alegeTipulPlantei();
    TipulPlantei getTipulPlantei() const;
    void arateplante() const;

	static int getCostCumparare(TipulPlantei tipul_plantei);
	static string getNumePlanta(TipulPlantei tipul_plantei);
	static int getCostVanzare(TipulPlantei tipul_plantei);
	static int getCantitate(TipulPlantei tipul_plantei);

    void setCantitate(TipulPlantei tipul_plantei, int cantitate);

private:
    TipulPlantei Tipul_Plantei;
    AtributePlanta atribute;

    static map<TipulPlantei, AtributePlanta> atributePlante;
};

#endif

