#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<char> vec(3,'a');
 

   for( char topper : vec)
   {
    cout<< topper <<"   ";
   }
   cout<< vec.capacity()<<"  ";
   cout<< vec.size()<<endl;

   
   
   vec.push_back('b');
   for( char topper : vec)
   {
    cout<< topper <<"   ";
   }
  cout<< vec.capacity()<<"  " ;
  cout<< vec.size()<<endl ;



  // vec.pop_back();
  // for( char topper : vec)
  //  {
  //   cout<< topper <<"   ";
  //  }
  // cout<< vec.capacity()<<"  " ;
  // cout<< vec.size()<<endl ;



  cout<<vec.front()<<endl;
  cout<< vec.capacity()<<"  " ;
  cout<< vec.size()<<endl ;


   cout<<vec.back()<<endl;
  cout<< vec.capacity()<<"  " ;
  cout<< vec.size()<<endl ;


  cout<<vec.at(2)<<endl;
  cout<< vec.capacity()<<"  " ;
  cout<< vec.size()<<endl ;
}
