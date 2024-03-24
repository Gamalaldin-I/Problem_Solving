#include <iostream>
using namespace std;
int main()
{int x;
cin>>x;
 string arr[x];
 for(int i=0;i<x;i++)
 {
     cin>>arr[i];
 }
 for(int o=0;o<x;o++)
 {
     for(int i=(arr[o].length()-1);i>=0;i--)
     {
         cout<<arr[o][i]<<" ";
     }
 cout<<endl;}
return 0;
}
