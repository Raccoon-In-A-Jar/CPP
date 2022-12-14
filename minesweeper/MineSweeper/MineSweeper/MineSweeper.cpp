// MineSweeper.cpp : Defines the entry point for the console application.
//
#include <stdio.h> 
#include <stdlib.h> 
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "Board.h"
#include "Case.h"
//#include "time.h"

using namespace std;

int main()
{	
	cout << "Welcome to Minesweeper v0.0\n\n";
	cout << "Disclaimer: note that selecting a number of lines/columns greater than 10 results in a glitchy display.\n";

	int colNb = 0;
	int rowNb = 0;
	int mineNb = 0;
	
//--------------------------------------------------------------------		//|| is_same<rowNb, int>
	cout << "How many lines? --> ";
	cin >> rowNb;
	while (rowNb <= 0) {
		cout << "Please, enter a whole number greater than zero: ";
		cin >> rowNb;
	}

//--------------------------------------------------------------------
	cout << "How many columns? --> ";
	cin >> colNb;
	while (colNb <= 0) {

		cout << "Please, enter a whole number greater than zero: ";
		cin >> colNb;
	}

//--------------------------------------------------------------------
	cout << "How many mines? --> ";
	cin >> mineNb;
	while (mineNb <= 0 || mineNb >= (colNb*rowNb)) {

		cout << "Please, enter a whole number greater than zero and lesser than ";
		cout << rowNb * colNb;
		cout << ": ";
		cin >> mineNb;
	}
//--------------------------------------------------------------------

	Board plateau(rowNb, colNb, mineNb);

	plateau.Display(plateau, rowNb, colNb);

	return 0;
}

