#include<iostream>
#include"string"
#include"iomanip"
using namespace std;
int last_digit(long long);
int main()
{
long long n,b;
cin>>n>>b;
cout<<last_digit(n)+last_digit(b);
 
return 0;}
int last_digit(long long x)
{int g;
    g=x%10;
    return g;
}
