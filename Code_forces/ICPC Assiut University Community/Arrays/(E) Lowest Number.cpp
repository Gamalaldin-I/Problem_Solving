#include"iostream"
using namespace std;
int main(){ int x; cin>>x;
int arr[x];
for(int i=0;i<x;i++)
{
    cin>>arr[i];
}
int mini=arr[0];
for(int i=1;i<x;i++)
{
    if(mini>arr[i])
    {
        mini=arr[i];
    }
}
for(int i=0;i<x;i++)
{
    if(arr[i]==mini){cout<<mini<<" "<<i+1; break;}
}
return 0;}
