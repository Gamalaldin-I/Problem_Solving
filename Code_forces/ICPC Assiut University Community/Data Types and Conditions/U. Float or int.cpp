#include <iostream>
using namespace std;
#include"string"
int main()
{ int num;
float numf;
 
cin>>numf;
num=numf;
if(numf==num)
    cout<<"int "<<num;
else cout<<"float "<<num<<" "<<numf-num;
return 0;
}
