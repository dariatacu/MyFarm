#include "Planta.h"
#include <iostream>
using namespace std;

 map<Planta::TipulPlantei, AtributePlanta> Planta::atributePlante = {
    {TipulPlantei::GRAU,    {5, 15, 3, 0, 0}},
    {TipulPlantei::PORUMB,  {7, 18, 4, 0, 0}},
    {TipulPlantei::SOIA,    {12, 22, 5, 0, 0}},
    {TipulPlantei::MORCOVI, {3, 13, 2, 0, 0}},
    {TipulPlantei::ROSII,   {9, 20, 4, 0, 0}},
    {TipulPlantei::CARTOFI, {4, 14, 3, 0, 0}}
};

Planta::Planta(TipulPlantei tipul_plantei, int cantitate)
    : Tipul_Plantei(tipul_plantei) {
    atribute = atributePlante.at(tipul_plantei);
}

Planta::~Planta() {}


Planta::TipulPlantei Planta::alegeTipulPlantei() {
    int alegere;

    std::cout << "Alege tipul plantei :\n"
        << "0. Grau - 5 bani\n"
        << "1. Porumb - 7 bani\n"
        << "2. Soia - 12 bani\n"
		<< "3. Morcovi - 3 bani\n"
		<< "4. Rosii - 9 bani\n"
		<< "5. Cartofi - 4 bani\n"
        << "(1-5): ";

    cin >> alegere;
    if (alegere >= 0 && alegere <= 5) {
        return static_cast<TipulPlantei>(alegere);
    }
    return TipulPlantei::Invalid;
}

Planta::TipulPlantei Planta::getTipulPlantei() const {
    return Tipul_Plantei;
}

void Planta::arateplante() const {
    cout << "Tipul plantei: " << getNumePlanta(Tipul_Plantei) << endl;
    cout << "Cost de cumparare: " << atribute.costCumparare << endl;
    cout << "Cost de vanzare: " << atribute.costVanzare << endl;
    cout << "Timp de crestere: " << atribute.timpCrestere << " zile\n\n";
}

int Planta::getCostCumparare(TipulPlantei tipul_plantei)
{
    return atributePlante.at(tipul_plantei).costCumparare;
}

string Planta::getNumePlanta(TipulPlantei tipul_plantei)
{
    switch (tipul_plantei) {
    case TipulPlantei::GRAU:
        return "Grau";
    case TipulPlantei::PORUMB:
        return "Porumb";
    case TipulPlantei::SOIA:
        return "Soia";
    case TipulPlantei::MORCOVI:
        return "Morcovi";
    case TipulPlantei::ROSII:
        return "Rosii";
    case TipulPlantei::CARTOFI:
        return "Cartofi";
    default:
        return "Invalid";
    }
}

int Planta::getCostVanzare(TipulPlantei tipul_plantei)
{
    return atributePlante.at(tipul_plantei).costVanzare;
}

int Planta::getCantitate(TipulPlantei tipul_plantei)
{
	return atributePlante.at(tipul_plantei).cantitate;
}

void Planta::setCantitate(TipulPlantei tipul_plantei, int cantitate)
{ 
	atributePlante.at(tipul_plantei).cantitate = cantitate;
}
