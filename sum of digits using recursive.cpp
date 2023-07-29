#include <iostream>

using namespace std;

int sum(int n)
{
    if(n
       ==0)
        return 0;
    return n%10+sum(n/10);
}
int main()
{
    int a=2500;
    cout<< sum(a);
    return 0;

}
