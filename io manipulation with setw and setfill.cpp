#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a=20;
    cout<<std::setw(6);
    cout<<setfill('#');
    cout<<a<< "\n";
    cout<<std::left;
    cout<<std::setw(8);
    cout<<a<< "\n";
    return 0;
}
