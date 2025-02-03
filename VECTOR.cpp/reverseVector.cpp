#include<iostream>
#include<vector>
using namespace std;

int reverse(vector<int>& vec , int n)
{
    int i = 0;
    int j = n-1;

    while(i<j)
    {
      int  temp = vec[i] ;
            vec[i] = vec[j];
            vec[j]= temp ;
            i++;
            j--;
    }



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

    reverse(vec ,n );

    cout<<endl;
     for( int i : vec)
    {
        cout<<i <<" ";
    }
    
}