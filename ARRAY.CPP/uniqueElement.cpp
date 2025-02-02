#include<iostream>
using namespace std;

void unique( int arr[] , int n)
{
    bool isUnique;

    for(int i = 0 ; i<n ; i++)
    {
        isUnique =true;
        for( int j =0 ; j<n ; j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                isUnique=false;
                break;
            }
        }

        if(isUnique)
        {
            cout<<arr[i]<<" ";
        }
    }
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

    cout<<"arrat is : ";
    for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

     cout<< endl<< " unique values : ";
     unique(arr, n);
     
}