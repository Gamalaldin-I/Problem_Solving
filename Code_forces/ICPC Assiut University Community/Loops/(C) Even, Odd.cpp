#include <iostream>
using namespace std;
 
int main()
{
   int x,neg=0,pos=0,even=0,odd=0;
   cin>>x;
   int arr[x];
for(int i=0;i<x;i++)
{
    cin>>arr[i];
}
for(int i=0;i<x;i++)
{
    if(arr[i]%2==0&&arr[i]!=1){even++;} else {odd++;}
}
for(int i=0;i<x;i++)
{
    if(arr[i]>0){pos++;} else if(arr[i]<0) {neg++;}
 
}
 
cout<<"Even: "<<even<<"\n"
<<"Odd: "<<odd<<"\n"
<<"Positive: "<<pos<<"\n"
<<"Negative: "<<neg<<"\n";
return 0;
}
