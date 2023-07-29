#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    vector <int> v = {10,51,20,5,4,8};
    sort(v.begin(),v.end());
    for(int x : v)
        cout<< x << " ";
        cout <<endl;
    sort(v.begin(),v.end());
    for(int x : v )
        cout<< x<< " ";
}
