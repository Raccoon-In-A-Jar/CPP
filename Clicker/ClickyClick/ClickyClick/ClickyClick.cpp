// ClickyClick.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "Windows.h"
#include "Windowsx.h"

#define WM_LBUTTONDOWN                  0x0201

//#include "Winuser.h"

using namespace std;

int main()
{
	cout << "Cursor coordinates:" << endl;

	// POINT est une structure intégrée qui définit les coordonnées x et y d'un... point.
	POINT curPos;
	
	// Actualisation en temps réel de la position du pointeur.		
	
	while (1)
	{
		if (WM_LBUTTONDOWN && !WM_LBUTTONUP)
		{
			// Stocke les coordonnées de la souris dans la variable coordonnées curPos.
			// D'où le pointeur vers curPos.
			GetCursorPos(&curPos);

			// Simple affichage...
			cout << "X = ";
			cout << curPos.x << endl;
			cout << "Y = ";
			cout << curPos.y << endl;
		}
	}







	/*
	LPARAM lParam;

	void MAKEPOINTS(lParam);

	typedef struct tagPOINTS {
		SHORT x;
		SHORT y;
	} POINTS, *PPOINTS, *LPPOINTS;

	//Position du pointeur de la souris :
	int xPos = GET_X_LPARAM(lParam);
	int yPos = GET_Y_LPARAM(lParam);

	cout << xPos << endl;
	cout << yPos << endl;

	//Faut pas regarder ça, je l'ai mis de côté pour après :
	/*UINT WINAPI SendInput(
		_In_ UINT    nInputs,
		_In_ LPINPUT pInputs,
		_In_ int     cbSize
	);*/
    
	//Empêche la console de se fermer automatiquement lorsque l'exécution du programme est terminée
	getchar();

	return 0;
}

