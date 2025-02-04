#include<iostream>
#include<vector>
using namespace std;

int single( vector<int>& vec  )
{
    int ans=0;
    for ( int i : vec)
    {
        ans ^= i;
    }
    
    return ans;
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

  cout<<endl<< single(vec );
}