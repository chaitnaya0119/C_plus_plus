#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout<<setprecision(8);
    double x=1.38971,y=2341555522.97822;
    cout<<x<< " "<<y<< "\n";
    cout<<std::showpoint;
    cout<<x<< "\n";
    cout<<showpos<< x<< "\n";
    cout<<uppercase<<y<< "\n";
    return 0;


}
