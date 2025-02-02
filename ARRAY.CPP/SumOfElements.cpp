#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"enter the element of the array : ";
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"arrat is : ";
    for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    int sum=0;
    for (int i=0 ; i<n ; i++)
    {
        sum += arr[i];
    }

    cout<<" sum = "<<sum;

     
}