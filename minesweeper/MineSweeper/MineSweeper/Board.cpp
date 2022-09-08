#include "stdafx.h"
#include "Board.h"
#include "Case.h"
#include <iostream>
#include "time.h"

using namespace std;



Board::Board(int x, int y, int m)
{
	Case **gameBoard = new Case*[x];
	
	//this loop initializes the game board:
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			Case square;
			gameBoard[i][j] = square;

			//cout << "[-] ";
		}
		//cout << "\n";
	}

	//filling the board with mines:
	srand(time(NULL));
	int bob = rand();
	cout << bob;

	int min = 0;
	int maxAbs = x - 1; //max abscissa value
	int maxOrd = y - 1; //max ordinate value

	int Abs = (min + (rand() % (int)(maxAbs - min + 1))); //random abscissa
	int Ord = (min + (rand() % (int)(maxOrd - min + 1))); //random ordinate

}

void Board::Display(Board gameBoard, int x, int y)
{
	//size_t x = sizeof(gameBoard) / sizeof(*gameBoard);
	cout << x; //marche pas parce que mes connaissances en C++ sont on ne peut plus limitées
	//size_t y = sizeof(gameBoard) / sizeof(gameBoard[0]);
	cout << y;
	cout << "\n";

	for (int k = 0; k < y; k++) 
	{
		if (k == 0)
		{
			cout << "[\\] ";
		}
		
		cout << "[";
		cout << k;
		cout << "] ";
	}
	cout << "\n";

	int a = 0;


	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (j == 0) 
			{
				cout << "[";
				cout << a;
				cout << "] ";
			}
			cout << "[-] ";
		}
		cout << "\n";
		a++;
	}
}


/*Board::~Board()
{
	
}*/
