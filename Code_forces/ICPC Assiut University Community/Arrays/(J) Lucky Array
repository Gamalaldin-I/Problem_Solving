#include"iostream"
#include"bits/stdc++.h"
using namespace std;
int main(){ int x,counter=1; cin>>x;
int arr[x];
for(int i=0;i<x;i++)
{
    cin>>arr[i];
}
int n= sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n); int num=arr[0];
for(int i=1;i<x;i++)
{
    if(num==arr[i]) counter++;
 
}
if(counter%2==1||counter==1) cout<<"Lucky\n";
else cout<<"Unlucky";
 
 
 
return 0;}
