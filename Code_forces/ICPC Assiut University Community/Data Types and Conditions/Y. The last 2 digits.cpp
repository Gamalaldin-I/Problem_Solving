#include <iostream>
using namespace std;
#include"string"
#include"cmath"
int main()
{ long long a1,b1,a2,b2;
cin>>a1>>b1>>a2>>b2;
a1=a1%100;
a2=a2%100;
b1=b1%100;
b2=b2%100;
int result;
result=a1*a2*b1*b2;
if(result%100<9) cout<<"0"<<result%100<<endl;
else cout<<result%100<<endl;
return 0;
}
