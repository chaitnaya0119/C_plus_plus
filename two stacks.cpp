#include <iostream>

using namespace std;

class Twostacks
{
    int arr[];
    int cap,top1,top2;
public:
    Twostacks(int n)
    {
         cap =n;
         top1=-1;
         top2=n;
         arr[]= new int[n];
    }
    bool push1(int x)
    {
        if(top1<(top2-1))
        {
            top1++;
            arr[top1]=x;
            return true;
        }
        return false;
    }
};
