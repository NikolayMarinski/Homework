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
    for(int i = (n - y) ;i >= 1; i--)
    {
    cout<<" ";
    }
        for(int i = y ;i>0 ; i--)
        {
        cout<<"*";
        }
cout<<endl;
}
return 0;
}
