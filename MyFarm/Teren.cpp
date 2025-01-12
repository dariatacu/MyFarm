#include "Teren.h"
#include <iostream>
using namespace std;


Teren::Teren() : nivel(1), numarTeren(NumarulTerenului::Invalid)
{
}

Teren::Teren(const int& nivel, NumarulTerenului numarulterenului) : nivel(nivel), numarTeren(numarulterenului)
{
}

Teren::~Teren()
{

}



Teren::NumarulTerenului Teren::getNumarulTerenului() const
{
	return numarTeren;
}

void Teren::arataTerenurile() const
{
    std::cout << "Terenul de nivel " << nivel << " Tip: ";
    if (plante.empty()) {
        std::cout << "  Nu este nimic plantat pe acest teren.\n";
    }
    else {
        std::cout << "  Plante pe acest teren:\n";
        for (const auto& planta : plante) {
            planta.arateplante();
        }
    }

}

void Teren::creazaTerenul()
{
    numarTeren = alegeTerenul();
}


Teren::NumarulTerenului Teren::alegeTerenul()
{
    std::cout << "Alege terenul pe care vrei sa plantezi:\n"
        << "1. Teren 1 : nivel 1\n"
        << "2. Teren 2 : nivel 2\n"
        << "3. Teren 3 : nivel 3\n"
        << "(1-3): ";

    int alegere;
	std::cin >> alegere;
    std::cin.ignore();
    switch (alegere) {
    case 1:
        return NumarulTerenului::UNU;
    case 2:
        return NumarulTerenului::DOI;
    case 3:
        return NumarulTerenului::TREI;

    default:
        std::cout << "Alegere invalida." << std::endl;
        return NumarulTerenului::Invalid;
    }
}

void Teren::adaugaPlanta(const Planta& planta)
{
    plante.push_back(planta);
    std::cout << "Planta a fost adaugata pe teren.\n";
}

void Teren::golesteTeren()
{
	plante.clear();
}

void Teren::afiseazaPlante() const
{
    std::cout << "Plante pe terenul " << static_cast<int>(numarTeren) << ":\n";
    if (plante.empty()) {
        std::cout << "Nu exista plante pe acest teren.\n\n";
        return;
    }
    for (const auto& planta : plante) {
        planta.arateplante();
    }
}
