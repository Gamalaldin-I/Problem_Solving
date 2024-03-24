#include <iostream>
using namespace std;
#include"string"
int main()
{ long long x;
int year, month, day;
int time;
cin>>x;
year=x/365;
month=(x%365)/30;
day=(x%365)%30;
cout<<year<<" years\n";
cout<<month<<" months\n";
cout<<day<<" days\n";
 
return 0;
}
