#include"iostream"
#include"bits/stdc++.h"
using namespace std;
int main(){ int x; cin>>x; //int temp;
int arr[x];
for(int i=0;i<x;i++)
{
    cin>>arr[i];
}
 
 
int n=sizeof(arr)/sizeof(arr[0]);
 sort(arr,arr+n);
for(int i=0;i<x;i++)
{
    cout<<arr[i]<<" ";
}
 
return 0;}
