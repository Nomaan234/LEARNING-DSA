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

    int target;
    cout<<"enter the target  : ";
    cin>>target;

//    brute force approch...........

  int maxSum = INT_MIN ;

    for (int i = 0 ; i < n; i++)
    {
        for(int j = i+1 ; j< n ; j++)
        {
            int sum=arr[i];
            sum += arr[j];
            if(target == sum )
            {
                cout<< i <<" "<<j;
            }
           
        }
        cout<<endl;
    }
    


// optimized approch..........

// int maxSum = INT_MIN ;

//     for (int i = 0 ; i < n; i++)
//     {
        
//          int sum =0;
//         for(int j = i ; j< n ; j++)
//         {
//                 sum += arr[j];
//                 maxSum = max(sum , maxSum);
            
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
//     cout<< maxSum; 

    // kadane's algorithm

    // int maxSum = INT_MIN ;
    // int sum =0;
    // for (int i = 0 ; i < n; i++)
    // {
    //             sum += arr[i];
    //             maxSum = max(sum , maxSum);
            
    //              if(sum<0)
    //              {
    //                 sum=0;
    //              }
        
    //              cout<<endl;
    // }
    // cout<< maxSum; 
}