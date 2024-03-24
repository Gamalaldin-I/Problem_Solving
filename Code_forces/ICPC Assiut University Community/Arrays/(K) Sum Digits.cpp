#include"iostream"
using namespace std;
int main()
{
int sum=0,x;
cin>>x;
string num;
cin>>num;
for(int i=0;i<x;i++)
{
   sum+=num[i]-'0';
}
cout<<sum;
 
    return 0;
}
