#include <iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(15);
    s.insert(25);
    for (auto it =s.begin();it != s.end();it++)
        cout << *it << " ";
    cout << endl;
    cout<< s.size();
    if(s.find(15)== s.end())
        return "not found";
    else
        return "Found";
    s.erase(15);
    s.clear()
    cout<< s.size();
    return 0;

}
