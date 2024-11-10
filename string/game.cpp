#include "header.h"
#include <cstdlib>
#include <ctime>

void play_game()
{
    int random = rand() % 251;
    cout << random << endl;

    while(true)
    {
        int guess;
        cout << "Enter guessing number.\n";
        cin >> guess;

        if(guess == random)
        {
            cout << "You Win!\n";
            break;
        }
        else if(guess < random)
        {
            cout << "Too low.\n";
        }
        else if(guess > random)
        {
            cout << "Too high.\n";
        }
    }
}

int main() {
    srand(time(NULL));
    int choice;

    do {
        cout << "0. Quit\n1. Play Game\n";
        cin >> choice;

        switch(choice)
        {
            case 0:
                cout << "Thanks for Nothing\n";
                break;
            case 1:
                play_game();
                break;
        }
    } while(choice != 0);
    
    return 0;
}
