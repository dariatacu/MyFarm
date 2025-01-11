#include "Game.h"
#include <iostream>
using namespace std;

Game::Game(string nume) : nume_jucator(nume), nivel(1), puncte(0), ferma() {}

void Game::afisareInfo() const {
    cout << "Jucator: " << nume_jucator << ", Nivel: " << nivel << ", Puncte: " << puncte << endl;
    ferma.afisareInfo();
}