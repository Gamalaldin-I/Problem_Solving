#include <iostream>
using namespace std;
#include"string"
int main()
{ int long x;
cin>>x;
while(x>=10)
{
    x/=10;
}
if(x==1) cout<<"ODD\n";
else if(x%2==1)cout<<"ODD\n";
 
else cout<<"EVEN\n";
return 0;
}
