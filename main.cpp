#include <iostream>
#include <string>
#include <cctype>
using namespace std;


class GameOptions {
    public:
        void options() {
            cout << "Options: \n";
            cout << "Show Options again: S\n";
            cout << "Display Board:      D\n";
            cout << "Edit Board:         E\n";
            cout << "End Game:           G\n";
        }

        char getUserInput(char userOption) {
            cout << ": ";
            cin >> userOption;
            
            return userOption;
        }
};


void gameRunner(){
    GameOptions gameOptions;
    char userOption;
    userOption = gameOptions.getUserInput(userOption);



    switch (toupper(userOption))
    {
    case 'S':
        gameOptions.options();
        break;
    
    case 'D':
        break;

    case 'E':
        break;

    case 'G':
        break;

    default:
        break;
    }

}

int main() {
    GameOptions gO;
    gO.options();


    gameRunner();

    return 0;
}

