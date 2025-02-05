#include<iostream>
#include<climits>
using namespace std;
int main ()
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
    cout<<endl;

    int maxSum = INT_MIN ;

    for (int i = 0 ; i < n ; i++)
    {
        for(int j = i ; j< n ; j++)
        {
            int sum =0;
            
            for( int k = i ; k<=j ; k++ )
            {
                sum += arr[k];
                maxSum = max(sum , maxSum);
            }
            cout<<"  ";
        }
        cout<<endl;
    }
    cout<< maxSum; 
}