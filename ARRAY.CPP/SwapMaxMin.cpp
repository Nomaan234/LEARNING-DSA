#include<iostream>
#include<climits>
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

    for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    // smallest integer
    int min =INT_MAX;
    int index1;
    for( int i =0 ; i<n ; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            index1=i;
        }
    }

    cout<<"smallest element of the array is : "<<min<<endl;
    cout<<"index for smallest element of the array is : "<<index1<<endl;


     // largest integer
    int max =INT_MIN;
    int index2;
    for( int i =0 ; i<n ; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index2=i;
            
        }
    }

    cout<<" largest element of the array is : "<<max<<endl;
    cout<<" index of largest element of the array is : "<<index2<<endl;


    swap(arr , index1 ,index2);
     for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}