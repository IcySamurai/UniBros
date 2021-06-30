#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "Funzioni.h"
#include "Player.h"
#include "Entity.h"
#include "Screen.h"

using namespace std;

int width = 50, height = 10;    // 'height' != dispari
Player p = Player(0, height - 2, ((char)4), 0, 5);
Screen schermo = Screen(width, height);
bool gameOver = false;

int main()
{
    Cursore(false);
    WaitScreen();

    while (!gameOver)
    {
        // Creazione del gestore per gli input da tastiera
        Movement(&gameOver, p, schermo);
        Handler(width, height, &gameOver, p, schermo);

        // Stampa a schermo di tutte le componenti del livello
        schermo.print();
        p.print();
        PrintInfo(width, height, p, schermo);

        Sleep(50);
    }

    Clear();
    GameOverScreen();
}