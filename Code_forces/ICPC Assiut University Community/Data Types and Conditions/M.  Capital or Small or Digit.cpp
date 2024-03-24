#include <iostream>
using namespace std;
#include"string"
int main()
{ string a;
cin>>a;
if(a>="a"&&a<="z") cout<<"ALPHA\nIS SMALL";
else if(a>="A"&&a<="Z") cout<<"ALPHA\nIS CAPITAL";
else cout<<"IS DIGIT\n";
return 0;
}
