#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int computer = rand() % 2 + 0;
    cout << "Rock, Paper, Scissors\n\n";

    int player;
    cout << "Choose Scissors(0), Rock(1), Paper(2) - ";
    cin >> player;

    if (player == computer)
    {
        cout << "The computer is "<<computer<<". You're "<<player<<". The game is even";
    }
        else if (player == 1 && computer == 0 || player == 2 && computer == 1 || player == 0 && computer == 2)
        {
            cout << "The computer is "<<computer<<". You're "<<player<<". You win";
        }
            else if (player == 0 && computer == 1 || player == 1 && computer == 2 || player == 2 && computer == 0)
            {
                cout << "The computer is "<<computer<<". You're "<<player<<". You lost";
            }
return 0;
}
