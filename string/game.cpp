#include "header.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

void print_vector(std::vector<int> vec)
{
    for(int i=0; i<vec.size(); i++)
    {
        std::cout << vec[i] << "\t";
    }
    std::cout << "\n";
}

void play_game()
{
    std::vector<int> guesses;

    int random = rand() % 251;
    cout << random << endl;
    int count=0;
    while(true)
    {
        int guess;
        cout << "Guess a number: ";
        cin >> guess;

        count++;

        if(guess != random)
        {
            guesses.push_back(guess);
        }
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
    std::ifstream input("best_score.txt");
    if(input.is_open())
    {
        std::cout << "Unable to open file reading\n";
        return;
    }
    int best_score;
    input >> best_score;

    std::ofstream output("best_score.txt");
    if(output.is_open())
    {
        std::cout << "Unable to open file for writing\n";
        return;
    }

    if (count < best_score)
    {
        output << count;
    }
    else
    {
        output << best_score;
    }
    print_vector(guesses);
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
