#include <iostream>
using namespace std;
#include"string"
#include"cmath"
int main()
{ int a,b,c;
cin>>a>>b>>c;
 
if(a<=b&&a<=c) {
if(b<=c){cout<<a<<"\n"<<b<<"\n"<<c<<"\n";}
else {cout<<a<<"\n"<<c<<"\n"<<b<<"\n";}}
 
 
else if(b<=a&&b<=c) {
if(a<=c){cout<<b<<"\n"<<a<<"\n"<<c<<"\n";}
else {cout<<b<<"\n"<<c<<"\n"<<a<<"\n";}}
 
 
else {
if(b<=a){cout<<c<<"\n"<<b<<"\n"<<a<<"\n";}
else {cout<<c<<"\n"<<a<<"\n"<<b<<"\n";}}
 
cout<<"\n"<<a<<"\n"<<b<<"\n"<<c;
return 0;
}
