#include <iostream>
using namespace std;
int main()
{int x;
long long fac=1;
cin>>x;
if(x>=0&&x<=15){
int arr[x];
for(int n=0;n<x;n++)
{cin>>arr[n];}

for(int n=0;n<x;n++)
{ if(arr[n]>=0&&arr[n]<=20){
    for(int o=1;o<=arr[n];o++)
    {
    fac*=o;
    }
    cout<<fac<<endl;
    fac=1;
}}}
return 0;
}
