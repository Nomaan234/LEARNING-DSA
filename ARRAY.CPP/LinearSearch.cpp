#include<iostream>
using namespace std;

int search(int arr[], int n , int target)
{
 for( int i = 0 ; i<n ; i++)
 if(target==arr[i])
 {
    return i;
    
 }

 return -1;
}
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

    for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

     int target;
    cout<<"enter the target to find : ";
    cin>>target;

cout<<"at index : "<<search(arr ,n,target);
}