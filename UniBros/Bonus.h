#pragma once		// Specifica che il compilatore include il file di intestazione una sola volta, durante la compilazione di un file di codice sorgente

#include "Entity.h"
#include "Platform.h"

struct boon
{
	int x;
	int y;
	int value;	// Valore del bonus (in termini di punteggio)
	int type; // 0: punti 1: vite 2: munizze
	boon* next;
};
typedef boon* BonusList;

class Bonus : public Entity
{
	protected:
		BonusList listaBonus;
		int num;

	public:
		Bonus(int x = 0, int y = 0, char symbol = '$');
		void generateBonus(Platform p, int diff);	// Genera i bonus di ogni livello
		int getValue(int x, int y);	// Gestisce la raccolta dei bonus da parte dell'utente
		int getType(int x, int y); //ritorna il tipo di bonus nelle coordinate x y
		void print();
		int getNum();
};