#include<iostream>
using namespace std;

void common( int arr1[] ,int arr2[], int n ,int m)
{
    bool isCommon;

    for(int i = 0 ; i<n ; i++)
    {
        isCommon =false;
        for( int j =0 ; j<n ; j++)
        {
            if(arr1[i]==arr2[j])
            {
                isCommon=true;
                break;
            }
        }

        if(isCommon)
        {
            cout<<arr1[i]<<" ";
        }
    }
}

int main()
{

    // first array ----------
    int n;
    cout<<"enter the size of the 1st array : ";
    cin>>n;

    int arr1[n];
    cout<<"enter the element of the 1st array : ";
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr1[i];
    }

    cout<<" 1st arrat is : ";
    for (int i=0 ; i<n ; i++)
    {
        cout<<arr1[i]<<" ";
    }

    //second array----------
    int m;
    cout<<endl<<"enter the size of the 2nd array : ";
    cin>>m;

    int arr2[m];
    cout<<"enter the element of the 2nd array : ";
    for (int i=0 ; i<m ; i++)
    {
        cin>>arr2[i];
    }

    cout<<" 2nd arrat is : ";
    for (int i=0 ; i<n ; i++)
    {
        cout<<arr2[i]<<" ";
    }

    cout<<endl<<"common elements are : ";
    common(arr1 ,arr2 ,n , m);
     
}