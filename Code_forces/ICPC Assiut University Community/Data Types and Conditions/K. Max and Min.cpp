#include"iostream"
using namespace std;
// return max
int maxi(int a,int b,int c)
{ int m;
if(a>=b&&a>=c) m=a;
else if(b>=a&&b>=c) m=b;
else m=c;
return m;
}
// return min
int mini(int a,int b,int c)
{ int m;
if(a<=b&&a<=c) m=a;
else if(b<=a&&b<=c) m=b;
else m=c;
return m;
}
int main()
{ int x,y,z;
cin>>x>>y>>z;
cout<<mini(x,y,z)<<" ";
cout<<maxi(x,y,z);
 
 
return 0;
}
