#include<iostream>
using namespace std;
int subSets(string str,string  curr =" ",int index=0)
{
   if (index==str.length())
   {
       cout<<  curr << " ";
       return 0;
   }
   subSets(str,curr,index+1);
   subSets(str,curr+str[index],index+1);

}
int main()
{
    cout<<subSets("ABC");
}
