#include <iostream>
using namespace std;
#include"string"
#include"cmath"
int main()
{ long long a1,b1,a2,b2;
cin>>a1>>b1>>a2>>b2;
if(b1<=b2&&b1>a2&&a1<=a2) cout<<a2<<" "<<b1;
else if(b1<=b2&&b1>a2&&a1>=a2) cout<<a1<<" "<<b1;
else if(b1>=b2&&a1<=a2) cout<<a2<<" "<<b2;
else if(b1>=b2&&a1>=a2&&b2>a1) cout<<a1<<" "<<b2;
else if(b1==a2) cout<<a2<<" "<<b1;
else cout<<-1;
return 0;
}
