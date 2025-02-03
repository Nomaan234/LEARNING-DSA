#include<iostream>
#include<vector>
using namespace std;

int search(  vector<int>& vec , int target )
{
     int index=-1;
    for( int i : vec)
    {
       index++;
        if(target == i)
        {
            return index;
        }
        
    }

    return -1 ;
}
int main()
{
    int n;
    cout<<"enter size of vector : ";
    cin>>n;

    vector<int> vec(n);
    cout<<"enter the element of vector : ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>vec[i];
    }

    for( int i : vec)
    {
        cout<<i <<" ";
    }

    int target;
     cout<<"enter the element to find : ";
    cin>>target;


    cout<<"index of the desir element : "<<search(vec , target);
}