#include <iostream>
#include <vector>

#include <string>
#include "Game.h"
#include "Planta.h"
#include "Teren.h"
#include "Utilaj.h"
#include "Ferma.h"

using namespace std;

void afisarePoveste() {
    cout << "Bun venit in jocul Ferma!" << endl;
    cout << "Esti un tanar fermier care mosteneste o ferma veche de la bunica sa. "
        << "Scopul tau este sa aduci ferma la gloria sa de odinioara, "
        << "gestionand terenurile, plantand culturi si extinzand afacerea." << endl;
    cout << "Apasa Enter pentru a incepe jocul..." << endl;
    cin.get(); 
}

void afisareMeniu() {
    cout << "\nMeniu principal:" << endl;
    cout << "1. Afiseaza informatii despre ferma" << endl;
    cout << "2. Planteaza o cultura" << endl;
    cout << "3. Recolteaza o cultura" << endl;
    cout << "4. Arata ferma" << endl;
    cout << "5. Extinde ferma" << endl;
    cout << "6. Iesi din joc" << endl;
}

string returneazaNumele() {
	string nume;
	cout << "Introdu numele jucatorului: ";
	cin >> nume;
	return nume;
}

int main() {
    afisarePoveste();

    int numarTeren = 1;
	int bani = 100;

	string numePlanta;
    bool rulare = true;

	vector<Teren::NumarulTerenului> terenuri;

    Teren teren1(1, Teren::NumarulTerenului::UNU);
    Teren teren2(2, Teren::NumarulTerenului::DOI);
  

    //Obiecte
	Game game(returneazaNumele(),bani);
	Ferma ferma(numarTeren,terenuri,bani);

    ferma.adaugaTeren(teren1);
    ferma.adaugaTeren(teren2);

    while (rulare) {
        system("cls");
        afisareMeniu();
        int optiune;
        cout << "Alege o optiune: ";
        cin >> optiune;


        switch (optiune) {
        case 1:
            game.afisareInfo();

            system("pause");
            break;
		case 2: {
            ferma.planteazaPeTeren();

			bani = ferma.getBani();
			game.setBani(bani);

            system("pause");
			break;
        }
        case 3:
			ferma.recolteazaPeTeren();
			bani = ferma.getBani();
			game.setBani(bani);

			system("pause");
			break;
		case 4:
            for (const auto& teren : ferma.getTerenuri()) {
                teren.afiseazaPlante();
            }

            system("pause");
            break;
		case 5:
			break;
        case 6:
            rulare = false;
            cout << "La revedere!" << endl;
            break;
        default:
            cout << "Optiune invalida!" << endl;
        }

    }

    return 0;
}
