#include "stdafx.h"
#include "Password.h"
#include <iostream>
#include <math.h> // la fonction "random" s'y trouve peut-être, mais je crois qu'elle est assez horrible à mettre en place

using namespace std;

Password::Password()
{
		char lvlOne[6];		// lov level security
		char lvlTwo[8];		// medium level security
		char lvlThree[10];  // high level security
}

char Generate(int x)
{
	switch (x)
	{
	case 1: //level 1

	case 2: //level 2

	case 3: //level 3
	
	default:
		break;
	}
	rand();
	cout << "bonjour" << endl;
}

char alphabetUn()
{
	char alphaLvOne[26];
	char lettre;

	// Liste des caractères alphabétiques (c'est une méthode abominable, mais c'est la seule que j'avais sous la main pour l'examen) :
	for (int i = 0; i < 26; i++)
	{

		//======switch impertinent======
		/* Apparemment, le switch n'en fait qu'à sa tête...
		switch (i)
		{
		case 0:
		lettre = 'a';
		case 1:
		lettre = 'b';
		case 2:
		lettre = 'c';
		case 3:
		lettre = 'd';
		case 4:
		lettre = 'e';
		case 5:
		lettre = 'f';
		case 6:
		lettre = 'g';
		case 7:
		lettre = 'h';
		case 8:
		lettre = 'i';
		case 9:
		lettre = 'j';
		case 10:
		lettre = 'k';
		case 11:
		lettre = 'l';
		case 12:
		lettre = 'm';
		case 13:
		lettre = 'n';
		case 14:
		lettre = 'o';
		case 15:
		lettre = 'p';
		case 16:
		lettre = 'q';
		case 17:
		lettre = 'r';
		case 18:
		lettre = 's';
		case 19:
		lettre = 't';
		case 20:
		lettre = 'u';
		case 21:
		lettre = 'v';
		case 22:
		lettre = 'w';
		case 23:
		lettre = 'x';
		case 24:
		lettre = 'y';
		cout << "y ? -->" << lettre << endl;
		case 25:
		lettre = 'z';

		}*/
		//======switch impertinent======		

		if (i == 0)
		{
			lettre = 'a';
			alphaLvOne[i] = lettre;
		}

		else if (i == 1)
		{
			lettre = 'b';
			alphaLvOne[i] = lettre;
		}

		else if (i == 2)
		{
			lettre = 'c';
			alphaLvOne[i] = lettre;
		}
		else if (i == 3)
		{
			lettre = 'd';
			alphaLvOne[i] = lettre;
		}
		else if (i == 4)
		{
			lettre = 'e';
			alphaLvOne[i] = lettre;
		}
		else if (i == 5)
		{
			lettre = 'f';
			alphaLvOne[i] = lettre;
		}
		else if (i == 6)
		{
			lettre = 'g';
			alphaLvOne[i] = lettre;
		}
		else if (i == 7)
		{
			lettre = 'h';
			alphaLvOne[i] = lettre;
		}
		else if (i == 8)
		{
			lettre = 'i';
			alphaLvOne[i] = lettre;
		}
		else if (i == 9)
		{
			lettre = 'j';
			alphaLvOne[i] = lettre;
		}
		else if (i == 10)
		{
			lettre = 'k';
			alphaLvOne[i] = lettre;
		}
		else if (i == 11)
		{
			lettre = 'l';
			alphaLvOne[i] = lettre;
		}
		else if (i == 12)
		{
			lettre = 'm';
			alphaLvOne[i] = lettre;
		}
		else if (i == 13)
		{
			lettre = 'n';
			alphaLvOne[i] = lettre;
		}
		else if (i == 14)
		{
			lettre = 'o';
			alphaLvOne[i] = lettre;
		}
		else if (i == 15)
		{
			lettre = 'p';
			alphaLvOne[i] = lettre;
		}
		else if (i == 16)
		{
			lettre = 'q';
			alphaLvOne[i] = lettre;
		}
		else if (i == 17)
		{
			lettre = 'r';
			alphaLvOne[i] = lettre;
		}
		else if (i == 18)
		{
			lettre = 's';
			alphaLvOne[i] = lettre;
		}
		else if (i == 19)
		{
			lettre = 't';
			alphaLvOne[i] = lettre;
		}
		else if (i == 20)
		{
			lettre = 'u';
			alphaLvOne[i] = lettre;
		}
		else if (i == 21)
		{
			lettre = 'v';
			alphaLvOne[i] = lettre;
		}
		else if (i == 22)
		{
			lettre = 'w';
			alphaLvOne[i] = lettre;
		}
		else if (i == 23)
		{
			lettre = 'x';
			alphaLvOne[i] = lettre;
		}
		else if (i == 24)
		{
			lettre = 'y';
			alphaLvOne[i] = lettre;
		}
		else if (i == 25)
		{
			lettre = 'z';
			alphaLvOne[i] = lettre;
		}


		/*cout << i << endl;
		cout << "lettre = " << lettre << endl;
		cout << "alphaLvOne[i] = " << alphaLvOne[i] << endl;*/
	}

	return char alphaLvOne;
}

char alphabetDeux()
{
	char alphaLvTwo[36];
	char lettre;

	for (int i = 0; i < 36; i++)
	{

		if (i == 0)
		{
			lettre = 'a';
			alphaLvTwo[i] = lettre;
		}

		else if (i == 1)
		{
			lettre = 'b';
			alphaLvTwo[i] = lettre;
		}

		else if (i == 2)
		{
			lettre = 'c';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 3)
		{
			lettre = 'd';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 4)
		{
			lettre = 'e';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 5)
		{
			lettre = 'f';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 6)
		{
			lettre = 'g';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 7)
		{
			lettre = 'h';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 8)
		{
			lettre = 'i';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 9)
		{
			lettre = 'j';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 10)
		{
			lettre = 'k';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 11)
		{
			lettre = 'l';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 12)
		{
			lettre = 'm';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 13)
		{
			lettre = 'n';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 14)
		{
			lettre = 'o';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 15)
		{
			lettre = 'p';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 16)
		{
			lettre = 'q';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 17)
		{
			lettre = 'r';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 18)
		{
			lettre = 's';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 19)
		{
			lettre = 't';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 20)
		{
			lettre = 'u';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 21)
		{
			lettre = 'v';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 22)
		{
			lettre = 'w';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 23)
		{
			lettre = 'x';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 24)
		{
			lettre = 'y';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 25)
		{
			lettre = 'z';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 26)
		{
			lettre = '0';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 27)
		{
			lettre = '1';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 28)
		{
			lettre = '2';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 29)
		{
			lettre = '3';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 30)
		{
			lettre = '4';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 31)
		{
			lettre = '5';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 32)
		{
			lettre = '6';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 33)
		{
			lettre = '7';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 34)
		{
			lettre = '8';
			alphaLvTwo[i] = lettre;
		}
		else if (i == 35)
		{
			lettre = '9';
			alphaLvTwo[i] = lettre;
		}

		/*cout << i << endl;
		cout << "lettre = " << lettre << endl;
		cout << "alphaLvOne[i] = " << alphaLvOne[i] << endl;*/
	}

	return char alphaLvTwo;
}

char alphabetTrois()
{
	char alphaLvThree[44];
	char lettre;

	for (int i = 0; i < 36; i++)
	{

		if (i == 0)
		{
			lettre = 'a';
			alphaLvThree[i] = lettre;
		}

		else if (i == 1)
		{
			lettre = 'b';
			alphaLvThree[i] = lettre;
		}

		else if (i == 2)
		{
			lettre = 'c';
			alphaLvThree[i] = lettre;
		}
		else if (i == 3)
		{
			lettre = 'd';
			alphaLvThree[i] = lettre;
		}
		else if (i == 4)
		{
			lettre = 'e';
			alphaLvThree[i] = lettre;
		}
		else if (i == 5)
		{
			lettre = 'f';
			alphaLvThree[i] = lettre;
		}
		else if (i == 6)
		{
			lettre = 'g';
			alphaLvThree[i] = lettre;
		}
		else if (i == 7)
		{
			lettre = 'h';
			alphaLvThree[i] = lettre;
		}
		else if (i == 8)
		{
			lettre = 'i';
			alphaLvThree[i] = lettre;
		}
		else if (i == 9)
		{
			lettre = 'j';
			alphaLvThree[i] = lettre;
		}
		else if (i == 10)
		{
			lettre = 'k';
			alphaLvThree[i] = lettre;
		}
		else if (i == 11)
		{
			lettre = 'l';
			alphaLvThree[i] = lettre;
		}
		else if (i == 12)
		{
			lettre = 'm';
			alphaLvThree[i] = lettre;
		}
		else if (i == 13)
		{
			lettre = 'n';
			alphaLvThree[i] = lettre;
		}
		else if (i == 14)
		{
			lettre = 'o';
			alphaLvThree[i] = lettre;
		}
		else if (i == 15)
		{
			lettre = 'p';
			alphaLvThree[i] = lettre;
		}
		else if (i == 16)
		{
			lettre = 'q';
			alphaLvThree[i] = lettre;
		}
		else if (i == 17)
		{
			lettre = 'r';
			alphaLvThree[i] = lettre;
		}
		else if (i == 18)
		{
			lettre = 's';
			alphaLvThree[i] = lettre;
		}
		else if (i == 19)
		{
			lettre = 't';
			alphaLvThree[i] = lettre;
		}
		else if (i == 20)
		{
			lettre = 'u';
			alphaLvThree[i] = lettre;
		}
		else if (i == 21)
		{
			lettre = 'v';
			alphaLvThree[i] = lettre;
		}
		else if (i == 22)
		{
			lettre = 'w';
			alphaLvThree[i] = lettre;
		}
		else if (i == 23)
		{
			lettre = 'x';
			alphaLvThree[i] = lettre;
		}
		else if (i == 24)
		{
			lettre = 'y';
			alphaLvThree[i] = lettre;
		}
		else if (i == 25)
		{
			lettre = 'z';
			alphaLvThree[i] = lettre;
		}
		else if (i == 26)
		{
			lettre = '0';
			alphaLvThree[i] = lettre;
		}
		else if (i == 27)
		{
			lettre = '1';
			alphaLvThree[i] = lettre;
		}
		else if (i == 28)
		{
			lettre = '2';
			alphaLvThree[i] = lettre;
		}
		else if (i == 29)
		{
			lettre = '3';
			alphaLvThree[i] = lettre;
		}
		else if (i == 30)
		{
			lettre = '4';
			alphaLvThree[i] = lettre;
		}
		else if (i == 31)
		{
			lettre = '5';
			alphaLvThree[i] = lettre;
		}
		else if (i == 32)
		{
			lettre = '6';
			alphaLvThree[i] = lettre;
		}
		else if (i == 33)
		{
			lettre = '7';
			alphaLvThree[i] = lettre;
		}
		else if (i == 34)
		{
			lettre = '8';
			alphaLvThree[i] = lettre;
		}
		else if (i == 35)
		{
			lettre = '9';
			alphaLvThree[i] = lettre;
		}
		else if (i == 36)
		{
			lettre = '@';
			alphaLvThree[i] = lettre;
		}
		else if (i == 37)
		{
			lettre = '&';
			alphaLvThree[i] = lettre;
		}
		else if (i == 38)
		{
			lettre = '§';
			alphaLvThree[i] = lettre;
		}
		else if (i == 39)
		{
			lettre = '!';
			alphaLvThree[i] = lettre;
		}
		else if (i == 40)
		{
			lettre = '€';
			alphaLvThree[i] = lettre;
		}
		else if (i == 41)
		{
			lettre = 'ù';
			alphaLvThree[i] = lettre;
		}
		else if (i == 42)
		{
			lettre = '$';
			alphaLvThree[i] = lettre;
		}
		else if (i == 43)
		{
			lettre = '*';
			alphaLvThree[i] = lettre;
		}
		
		/*cout << i << endl;
		cout << "lettre = " << lettre << endl;
		cout << "alphaLvOne[i] = " << alphaLvOne[i] << endl;*/
	}

	return char alphaLvThree;
}

Password::~Password()
{
}
