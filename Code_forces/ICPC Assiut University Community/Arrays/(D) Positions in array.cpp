#include"iostream"
using namespace std;
int main(){ int x; cin>>x;
int arr[x];
for(int i=0;i<x;i++)
{
    cin>>arr[i];
}
for(int i=0;i<x;i++)
{
    if(arr[i]<=10)
        cout<<"A["<<i<<"] = "<<arr[i]<<"\n";
}
return 0;}
