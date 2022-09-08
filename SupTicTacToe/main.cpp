
#include <iostream>
#include <typeinfo>

using namespace std;


int main()
{
    gameStart:  //setting a "goto" mark

    //Initializing the game:
    char grid[3][3];
    bool gameOver = false;

    //Player names:
    string P1;
    string P2;

    cout << "====================================================" << endl << "               WELCOME TO TIC TAC TOE" << endl << "====================================================" << endl;
    cout << "While entering your name, please avoid using blank spaces or the game will be glitching out" << endl;
    cout << "Player 1, enter your name:" << endl;
    cin >> P1;
    cout << "Welcome, " << P1 << "! -- X" << endl;
    cout << endl;
    cout << "Player 2, enter your name:" << endl;
    cin >> P2;
    cout << "Welcome, " << P2 << "! -- O" << endl;
    cout << endl;

    //Determines which player currently playing:
    //Player 1 begins.
    string turn = P1;


    while(gameOver == false){

        //Displays the player's name:
        cout << turn << "'s turn:" << endl;
        cout << endl;
        cout << endl;

        int abs; //row
        int ord; //line
        bool posErr = false; //detects a wrong position for a symbol

        //Prompt and display:
        do{

            posErr = false; //Should it be set to "true", sets it back to "false".

            //Display:
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){

                    if(grid[i][j] == 'x'){
                        cout << "[X]";
                    }
                    else if(grid[i][j] == 'o'){
                        cout << "[O]";
                    }
                    else{ cout << "[-]";}
                }
                cout << endl;
            }

            //Prompt player input:
            //Select row:
            cout << endl << "Which row?" << endl;
            cin >> abs;
            while(abs<1 || abs>3){
                cout << "Please enter a valid value. Valid values are 1, 2 and 3." << endl;
                cin >> abs;
            }
            //Select line:
            cout << endl << "Which column?" << endl;
            cin >> ord;
            while(ord<1 || ord>3){
                cout << "Please enter a valid value. Valid values are 1, 2 and 3." << endl;
                cin >> ord;
            }
            cout << endl;

            if(grid[abs-1][ord-1] == 'x' || grid[abs-1][ord-1] == 'o'){
                cout << "There's already a symbol there. Please, choose another position." << endl;
                posErr = true;
            }


            }while(posErr == true); //loops if there already is a symbol at the chosen coordinates.

        cout << endl;

        //Ends turn and swaps players:
        if(turn == P1){
            grid[abs-1][ord-1] = 'x';
            turn = P2;
        }
        else{
            grid[abs-1][ord-1] = 'o';
            turn = P1;}

        //Victory requirements:
        for(int m=0; m<3; m++){

            //Player 1 check:
            if(grid[m][0] == 'x' && grid[m][1] == 'x' && grid[m][2] == 'x'){cout << P1 << " wins!" << endl; gameOver = true;} //horizontal check
            else if(grid[0][m] == 'x' && grid[1][m] == 'x' && grid[2][m] == 'x'){cout << "-------" << P1 << " wins!" << "-------" << endl; gameOver = true;} //vertical check
            else if(grid[0][0] == 'x' && grid[1][1] == 'x' && grid[2][2] == 'x'){cout << "-------" << P1 << " wins!" << "-------" << endl; gameOver = true;} //diagonal check
            else if(grid[0][2] == 'x' && grid[1][1] == 'x' && grid[2][0] == 'x'){cout << "-------" << P1 << " wins!" << "-------" << endl; gameOver = true;} //diagonal check
            //Player 2 check:
            else if(grid[m][0] == 'o' && grid[m][1] == 'o' && grid[m][2] == 'o'){cout << "-------" << P2 << " wins!" << "-------" << endl; gameOver = true;} //horizontal check
            else if(grid[0][m] == 'o' && grid[1][m] == 'o' && grid[2][m] == 'o'){cout << "-------" << P2 << " wins!" << "-------" << endl; gameOver = true;} //vertical check
            else if(grid[0][0] == 'o' && grid[1][1] == 'o' && grid[2][2] == 'o'){cout << "-------" << P2 << " wins!" << "-------" << endl; gameOver = true;} //diagonal check
            else if(grid[0][2] == 'o' && grid[1][1] == 'o' && grid[2][0] == 'o'){cout << "-------" << P2 << " wins!" << "-------" << endl; gameOver = true;} //diagonal check

        }

        //Tie:
        int tie = 0;
        for(int k=0; k<3; k++){
            for(int c=0; c<3; c++){  //I'm a troll. =)
                if(grid[k][c] == 'x' || grid[k][c] == 'o'){
                    tie += 1;
                }
            }
        }
        if(tie == 9){cout << "-----------" << "It's a tie!" << "-----------" << endl; gameOver = true;}

    }

    if(gameOver = true){goto gameStart;}

    return 0;
}
