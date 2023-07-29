#include <iostream>

using namespace std;

int main()
{
    int x=0,y=0;
    cout<< "Enter a choke:";
    char move;
    cin>>move;
    switch(move)
    {
        case 'l' :x++;
        break;
        case 'r' : x--;
        break;
        case 'u':y++;
        break;
        case 'd': y--;
        break;
         default : cout<< "  invalid choke";
    }

    cout<<x<< " "<<y;
    return 0;
}
