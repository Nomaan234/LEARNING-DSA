#include<iostream>
using namespace std;

int swap(int arr[] , int i , int j)

{
    int temp;
    temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
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

    cout<<" array : ";
    for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int i = 0;
    int j = n-1;
    while(i<j)
    {
        swap(arr , i ,j);
        i++;
        j--;
    }

    cout<<"reverse array : ";
     for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }


}  