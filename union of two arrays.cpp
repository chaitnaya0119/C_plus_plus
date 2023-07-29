#include <iostream>

using namespace std;
int unionOfArrays(int arr1[],int arr2[],int n,int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if (i>0 && arr1[i]==arr1[i-1])
            i++;
            continue;
        if (j>0 && arr2[i]==arr2[i-1])
            j++;
            continue;
        if (arr1[i]== arr2[j])
            cout<< arr1[i];
            i++;
            j++
        else if(arr1[i]<arr2[j])
            cout<< arr1[i];
            i++;
        else if(arr1[i]>arr2[j])
            cout<< arr2[j];
            j++;
    }
    while  (i<n)
        cout<< arr1[i];
        i++;
    while (j<m)
        cout<< arr2[j];
        j++;
}
