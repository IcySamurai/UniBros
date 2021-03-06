#pragma once		// Specifica che il compilatore include il file di intestazione una sola volta, durante la compilazione di un file di codice sorgente

#include "Entity.h"

class Player : public Entity
{
	protected:
		int punti, vite, ammo;

	public:
		Player(int x, int y, char symbol = '@', int punti = 0, int vite = 0, int ammo = true);
		void increaseX(int x);
		void increaseY(int y);
		void decreaseX(int x);
		void decreaseY(int y);
		int getPunti();
		void setPunti(int pt);
		int getVite();
		void setVite(int vt);
		int getAmmo();	// Restituisce la quantit� di munizioni rimasta
		void addAmmo(int n);	// Aumenta la quantit� di munizioni disponibili
		void increasePunti(int pt);
		void decreaseVite(int vt);
		bool fire();	// Riduce la quantit� di munizioni disponibili
		int getPrevy();
		int getPrevx();
		void setPrevx(int x);
		void setPrevy(int y);
};