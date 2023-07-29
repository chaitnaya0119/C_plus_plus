#include <iostream>

using namespace std;

int main()
{
    int x,y,swap=0;
    cout<< "enter the first integer:\n";
    cin>>x;
    cout<< "enter the secound integer:\n";
    cin>>y;
    swap=x;
    y=swap;
    swap=y;
    x=swap;
    cout<< y<< "\n";
    cout<< x<< "\n";
}
