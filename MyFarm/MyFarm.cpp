#include <iostream>
#include <string>
#include "Game.h"
#include "Planta.h"
#include "Teren.h"
#include "Utilaj.h"

void afisarePoveste() {
    cout << "Bun venit in jocul Ferma!" << endl;
    cout << "Esti un tanar fermier care mosteneste o ferma veche de la bunica sa. "
        << "Scopul tau este sa aduci ferma la gloria sa de odinioara, "
        << "gestionand terenurile, plantand culturi si extinzand afacerea." << endl;
    cout << "Apasa Enter pentru a incepe jocul..." << endl;
    cin.get(); // A?teapt? Enter
}

void afisareMeniu() {
    cout << "\nMeniu principal:" << endl;
    cout << "1. Afiseaza informatii despre ferma" << endl;
    cout << "2. Planteaza o cultura" << endl;
    cout << "3. Recolteaza o cultura" << endl;
    cout << "4. Cumpara un utilaj" << endl;
    cout << "5. Extinde ferma" << endl;
    cout << "6. Iesi din joc" << endl;
}

int main() {
    afisarePoveste();

    Game game("Ion");
    bool rulare = true;

    while (rulare) {
        afisareMeniu();
        int optiune;
        cout << "Alege o optiune: ";
        cin >> optiune;

        switch (optiune) {
        case 1:
            game.afisareInfo();
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
