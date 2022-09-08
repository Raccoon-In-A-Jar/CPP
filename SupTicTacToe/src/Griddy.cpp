#include "Griddy.h"
#include <iostream>

using namespace std;

Griddy::Griddy()
{
    //ctor
}

Griddy::~Griddy()
{
    //dtor
}

 void gridDisplay(char[] aGrid)
    {
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){

                if(aGrid[i][j] == 'x'){
                    std::cout << "[X]";
                }
                else if(aGrid[i][j] == 'o'){
                    std::cout << "[O]";
                }
                else{ std::cout << "[-]";}
            }
            std::cout << endl;
        }
    }
