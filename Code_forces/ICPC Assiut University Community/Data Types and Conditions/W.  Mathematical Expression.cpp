#include <iostream>
using namespace std;
#include"string"
int main()
{ long long x,y,r;
string sign,q;
cin>>x>>sign>>y>>q>>r;
if(sign=="+"){
    if(x+y==r) cout<<"Yes\n";
    else cout<<x+y;
}
else if(sign=="-"){
    if(x-y==r) cout<<"Yes\n";
    else cout<<x-y;
}
else if (sign=="*"){if (x*y==r)cout<<"Yes\n";
else cout<<x*y;}
else cout<<"Gemy\n";
 
return 0;
}
