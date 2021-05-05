#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
int year;
cout << "Type an year - ";
cin >> year;

if (year % 4 == 0 && year % 100 != 0)
    {
     cout << "The year is leap";
    }
    else
        {
         cout << "The year isn't leap";
        }

return 0;
}
