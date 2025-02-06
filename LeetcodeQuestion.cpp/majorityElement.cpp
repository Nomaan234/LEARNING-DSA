#include<iostream>
#include<algorithm>
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

//    brute force approch...........

    // for (int i : arr)
    // {
    //     int freq=0;
    //     for(int j : arr)
    //     {
    //         if(i==j)
    //         {
    //             freq++;
    //         }
             
    //     }
    //     if(freq> n/2)
    //     {
    //         cout<<"majority element : "<<i;
    //         break;
    //     }
    // }
    


// optimized approch..........

// sort(arr , arr+ n);
// cout<<"sorted array : ";
// for (int i=0 ; i<n ; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// int freq=1;
// int ans = arr[0];

//  for (int i =1 ; i < n ; i++)
//     {   
//         if(arr[i]==arr[i-1])
//         {
//             freq++;
//         }   
//         else{
//             freq=1;
//             ans=arr[i];
//         }   
//             if(freq> n/2)
//         {
//             cout<<"majority element : "<<ans;
//             break;
//         }
        
//     }

    // Moore's voting algorithm
    int freq=0;
    int ans=0;
    for(int i = 0 ; i < n ; i++)
        {
            if(freq == 0)
            {
                ans = arr[i];
            }
            if(ans == arr[i])
            {
                freq++;
            }
            else{
                freq--;
            }
        }

        cout<<" majority element : "<< ans;
    
}