#include <iostream>

using namespace std;

void rotateArray(int arr[3][2])
{
    for (int i=0;i<3;i++)
        for (int j=i+1;j<2;j++)
            swap(arr[i][j],arr[j][i]);
    for (int i=0;i<3;i++)
    {
        int low =0,high=2-1;
        while(low < high)
            swap(arr[low][i],arr[i][high]);
        low++;
        high--;
    }

}
int main()
{
    int arr[3][2]={{1,2},
                   {3,4},
                   {5,6}};
    rotateArray(arr);
    for (int i=0;i<3;i++)
       {
          for (int j=0;j<2;j++)
            {
                cout<< arr[i][j]<< " ";
            }
            cout<< endl;
       }
}
