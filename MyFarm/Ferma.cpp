#include "Ferma.h"
#include <iostream>
using namespace std;



Ferma::Ferma(const int& nivel, std::vector<Teren::NumarulTerenului>& terenuriAlese,int& baniInitiali) :
	terenuriAlese(terenuriAlese), nivel(nivel), bani(baniInitiali)

{
}

Ferma::~Ferma()
{
	for (size_t i = 0; i < terenuri.size(); ++i) {
        terenuri.pop_back();
	}
}

void Ferma::adaugaTeren(Teren& terenAles)
{

    switch (terenAles.getNumarulTerenului()) {
  
    case Teren::NumarulTerenului::UNU:
        break;
    case Teren::NumarulTerenului::DOI:
        break;
    case Teren::NumarulTerenului::TREI:
        break;

    default:
        std::cout << "Nu exista acest teren" << std::endl;
        return;
    }


     terenuri.push_back(terenAles);

}

void Ferma::arataTerenurile() const
{
    if (terenuri.empty()) {
        cout << "Nu ai terenuri!" << endl;
    }
    else {
        cout << "Teren: " /*<< numar*/ << endl;
        for (size_t i = 0; i < terenuri.size(); ++i) {
            cout << "  " << i + 1 << ". ";
            terenuri[i].arataTerenurile();
        }
        cout << endl;
    }
}

void Ferma::planteazaPeTeren()
{
    if (terenuri.empty()) {
        std::cout << "Nu exista terenuri disponibile.\n";
        return;
    }

    std::cout << "Selecteaza un teren:\n";
    for (size_t i = 0; i < terenuri.size(); ++i) {
        std::cout << i + 1 << ". ";
        terenuri[i].arataTerenurile();
    }

    int alegereTeren;
    std::cin >> alegereTeren;
    if (alegereTeren < 1 || alegereTeren > terenuri.size()) {
        std::cout << "Alegere invalida.\n";
        return;
    }


    Teren& terenAles = terenuri[alegereTeren - 1];

    Planta::TipulPlantei tipPlanta = Planta::alegeTipulPlantei();
    if (tipPlanta == Planta::TipulPlantei::Invalid) {
        std::cout << "Tip de planta invalid.\n";
        return;
    }


    int cantitate;
    std::cout << "Introdu cantitatea de plantat: ";
    std::cin >> cantitate;


    int costTotal = cantitate * Planta::getCostCumparare(tipPlanta);

    if (bani < costTotal) {
        std::cout << "Nu ai suficienti bani pentru aceasta plantare. Ai nevoie de "
            << costTotal << " bani, dar ai doar " << bani << " bani.\n";
        return;
    }

    bani -= costTotal;
    Planta plantaNoua(tipPlanta, cantitate);

	plantaNoua.setCantitate(tipPlanta,cantitate);
    terenAles.adaugaPlanta(plantaNoua);

    std::cout << "Ai plantat cu succes " << cantitate << " unitati de "
        << Planta::getNumePlanta(tipPlanta) << " pe terenul selectat.\n";
    std::cout << "Bani ramasi: " << bani << " bani.\n";

}

void Ferma::recolteazaPeTeren()
{
    if (terenuri.empty()) {
        std::cout << "Nu exista terenuri disponibile.\n";
        return;
    }

    std::cout << "Selecteaza un teren pentru recoltare:\n";
    for (size_t i = 0; i < terenuri.size(); ++i) {
        std::cout << i + 1 << ". ";
        terenuri[i].arataTerenurile();
    }

    int alegereTeren;
    std::cin >> alegereTeren;
    if (alegereTeren < 1 || alegereTeren > terenuri.size()) {
        std::cout << "Alegere invalida.\n";
        return;
    }

    Teren& terenAles = terenuri[alegereTeren - 1];

    if (terenAles.getPlante().empty()) {
        std::cout << "Nu exista plante pe acest teren.\n";
        return;
    }

    int totalProfit = 0;

    for (const auto& planta : terenAles.getPlante()) {
        int profitPlanta = planta.getCantitate(planta.getTipulPlantei()) * Planta::getCostVanzare(planta.getTipulPlantei());
        totalProfit += profitPlanta;

        std::cout << "Recoltat " << planta.getCantitate(planta.getTipulPlantei()) << " unitati de "
            << Planta::getNumePlanta(planta.getTipulPlantei())
            << " pentru " << profitPlanta << " bani.\n";
    }

    bani += totalProfit;
    terenAles.golesteTeren(); 

    std::cout << "Profit total: " << totalProfit << " bani.\n";
    std::cout << "Bani ramasi: " << bani << " bani.\n";
}

