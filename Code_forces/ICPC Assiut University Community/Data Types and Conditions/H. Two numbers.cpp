#include <iostream>
using namespace std;
#include"string"
int main()
{ float n1,n2,r;
int long floor=0, round=0, celling=0, res=0;
cin>>n1>>n2;
r=n1/n2;
res=n1/n2;
// equal case
if(r==res)
{
    round=res;
    celling=res;
    floor=res;
  
 
}
 // greater case
else if(r>=(res+0.5))
{
    round= res+1;
    celling= res+1;
    floor=res;
 
}
// smaller case
else if(r<(res+0.5))
{
    round=res;
    celling=res+1;
    floor=res;
 
}
    cout<<"floor "<<n1<<" / "<<n2<<" = "<<floor<<endl
<<"ceil "<<n1<<" / "<<n2<<" = "<<celling<<endl
<<"round "<<n1<<" / "<<n2<<" = "<<round<<endl;
 
return 0;
}
