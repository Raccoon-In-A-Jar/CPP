#include "stdafx.h"
#include <iostream>
#include "stdio.h"

using namespace std;

int main()
{
	int lvl;



	// petit message d'accueil
	cout << "===============================" << endl;
	cout << "        SUPGenerator" << endl;
	cout << " Convenient password generator" << endl;
	cout << "===============================" << endl;

	cout << " Please, choose your security level: 1, 2 or 3." << endl;
	cout << "Security level: ";
	cin >> lvl;
	cout << endl << lvl << endl;
	
	/*
	if (lvl == 1)
	{
		cout << endl << "lvl = 1" << endl;
	}
	else {
		cout << "lvl != 1" << endl;
	}*/
	
	// problème à partir d'ici
	while (lvl != 1 and lvl != 2 and lvl != 3)
	{
		cout << " Please type in \"1\", \"2\" or \"3\", accordingly to your security level of choice." << endl;
		cout << " Security level: ";
		cin >> lvl;
		cin;
	}

	// press any key to continue
	cin;
    return 0;
}

