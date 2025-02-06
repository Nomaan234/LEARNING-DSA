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

  

    // for (int i = 0 ; i < n; i++)
    // {
    //     for(int j = i+1 ; j< n ; j++)
    //     {
    //         int sum=arr[i];
    //         sum += arr[j];
    //         if(target == sum )
    //         {
    //             cout<< i <<" "<<j;
    //         }
           
    //     }
        
    // }
    


// optimized approch..........

int i=0;
int j=n-1;

while(i<j)

{
    if ( arr[i] + arr[j] > target)
{
    j--;
}

   if ( arr[i] + arr[j] < target)
{
    i++;
}

if ( target == arr[i] + arr[j] )
{
    cout<<i<<" , "<<j;
    break;
}

}
}   