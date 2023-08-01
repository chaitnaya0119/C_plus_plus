#include <iostream>
#include<string.h>

using namespace std;

bool palind(string str,int start,int end)
{
    if (start>=end)
        return true;

    return (str[start]==str[end])&& palind(string str,int start+1,int end-1;
}
int main()
{
    string str;
    cout<< "Enter the string: "<< endl;
    cin>> str;
    int start=0;
    int end = str.length()-1;
    palind(str,start,end);
}
