//Find the largest and smallest element in an array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0];
    //To find the maximum element in a given array
    for(int i=1; i<n; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<max<<endl;
    //To find the smallest element in a given array
    int min=arr[0];
    for(int i=1; i<n; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<min;
    return 0;
}