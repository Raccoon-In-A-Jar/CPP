#pragma once
class game
{
public:
	game();
	virtual ~game();

	//lancement du jeu
	void jeu();
	
	//lancer de d�
	int dice();

	//tour joueur
	int tour();

	//d�faite
	void loss();

	//victoire
	void win();

	//info joueur
	void info();

	//affichage propri�t�s
	void displayProp();

	//affichage plateau
	void displayBoard();
};

