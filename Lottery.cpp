#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int lottery = rand() % 999 + 100;


	cout << "Enter your lottery pick (three digits): ";
	int guess = 0;
	cin >> guess;

	int lotteryDigit1 = lottery / 100;
	int lotteryDigit2 = lottery % 100 / 10;
	int lotteryDigit3 = lottery % 10;

    int guessDigit1 = lottery / 100;
	int guessDigit2 = lottery % 100 / 10;
	int guessDigit3 = lottery % 10;

	cout << "The lottery number is " << lottery << endl;

    if ( lotteryDigit1 != lotteryDigit2 && lotteryDigit1 != lotteryDigit3 && lotteryDigit2 != lotteryDigit3)
	{
	  if (guess == lottery)
        {
		cout << "Exact match: you win $10,000";
        }
        else if (guessDigit1 == (lotteryDigit2 || lotteryDigit3) && guessDigit2 == (lotteryDigit1||lotteryDigit3) && guessDigit3 == (lotteryDigit1||lotteryDigit2))
            {
            cout << "Match all digits: you win $3,000";
            }
                else if (guessDigit1 == lotteryDigit1 || guessDigit1 == lotteryDigit2 || guessDigit1 == lotteryDigit3 || guessDigit2 == lotteryDigit1 || guessDigit2 == lotteryDigit2 || guessDigit2 == lotteryDigit3 || guessDigit3 == lotteryDigit1 || guessDigit3 == lotteryDigit2 || guessDigit3 == lotteryDigit3)
                {
                    cout << "Match one digit: you win $1,000";
                }
                    else
                    {
                        cout << "Sorry, no match";
                    }
	}
return 0;
}
