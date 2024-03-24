#include <iostream>
using namespace std;
#include"cstring"
#include"cmath"
int main()
{ long num; cin>>num;
long long  arr[num];
long long sum=0;
for(int i=0;i<num;i++)
{
    cin>>arr[i];
}
 
for(int i=0;i<num;i++)
{
    sum+=arr[i];
}
cout<<abs(sum);
return 0;}
