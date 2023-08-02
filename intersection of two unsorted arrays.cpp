#include <iostream>
#include<unordered_set>
using namespace std;

int intersect(int a[],int b[], int n,int m)
{
    unordered_set<int> s(b,b+m);
    for (auto i=0;i<n;i++)
        if(s.find(arr[i] != s.end()))
             cout <<< arr[i]<< " ";
}
