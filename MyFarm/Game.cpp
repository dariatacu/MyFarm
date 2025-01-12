#include "Game.h"
#include <iostream>
using namespace std;

Game::Game(string nume,int& bani) : nume_jucator(nume), nivel(1), puncte(0),bani(100) {}

void Game::afisareInfo() const {
    cout << "Jucator: " << nume_jucator << ", Nivel: " << nivel << ", Puncte: " << puncte <<",Bani: " << bani << endl;

}

void Game::setBani(int bani)
{
	this->bani = bani;
}
