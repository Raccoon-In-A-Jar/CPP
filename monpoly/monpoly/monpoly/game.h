#pragma once
class game
{
public:
	game();
	virtual ~game();

	//lancement du jeu
	void jeu();
	
	//lancer de dé
	int dice();

	//tour joueur
	int tour();

	//défaite
	void loss();

	//victoire
	void win();

	//info joueur
	void info();

	//affichage propriétés
	void displayProp();

	//affichage plateau
	void displayBoard();
};

