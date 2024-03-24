#include"iostream"
using namespace std;
int main(){ int x,key ,search1=0; cin>>x; int arr[x];
for(int i=0;i<x;i++)
{
    cin>>arr[i];
}
cin>>key;
for(int i=0;i<x;i++)
{
    if(arr[i]==key)
        {cout<<i; search1=1; break;}
 
}
if(search1==0) cout<<-1;
return 0;}
