#include <iostream>
using namespace std;
#include"cstring"
int main()
{ string num0,num1;
cin>>num1;
num0=num1;
int get;
int out;
 
int i,j=num0.length()-1;
for(i=0;i<j;i++)
{
  char temp=num0[i];
  num0[i]=num0[j];
  num0[j]=temp;
        j--;
}
get=stoi(num1);
out=stoi(num0);
if(get==out) cout<<out<<"\n"<<"YES";
else cout<<out<<"\n"<<"NO";
return 0;}
