#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
cout << "Enter a number "<<endl;
int n;
cin >> n;
for(int y = n;y > 0; y--)
{
for(int i = y ;i >= 1; i--)
{
cout<<i;
}
for(int i = 2 ;i <= y ; i++)
{
cout<<i;
}
cout<<endl;
}
return 0;
}
