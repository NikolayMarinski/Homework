#include <iostream>//library
#include <cstdlib>//library
#include <ctime>//library
using namespace std;//using this element from the cstdlib library

int main()//start of the body
{
    cout << "Guess My Number Game\n\n";

    int m;
    int n;
    cout << "Enter the the highest number(m) - ";
    cin >> m;
    cout << "Enter the the lowest number(n) - ";
    cin >> n;


    srand(time(0)); //seed random number generator
    int num = rand() % m + n; // random number between n and m

    int guess = 0;//introducing guess
    int counter = 0;
    while (guess != num) { //cycle to find the number
        cout << "Enter a guess between  " << n << " and " << m << " : ";
        cin >> guess; // the person have to enter a guess
        counter ++;
        if (guess == 0)
        {
            cout << "Game Over";

            return 0;
        }
        else if (guess > num) {//if it's too high the program tells him that the number is too high
            cout << "Too high!\n\n";//if it's too high the program tells him that the number is too high
        }
        else if (guess < num)//if it's too low the program tells him that the number is too low
            {
                cout << "Too low!\n\n";//if it's too low the program tells him that the number is too low
            }
        else {
            cout << "\nCorrect! You got it in ";// if he guesses the number right the program tells him
            cout << " Your attempts - "<< counter <<"";
        }

    }

    return 0;//after the person guesses the number the program stops and returns 0
}
