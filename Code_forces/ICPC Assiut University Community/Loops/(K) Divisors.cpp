#include <iostream>
using namespace std;
int main()
{int x,counter=0;
cin>>x;
 
 
for(int o=1;o<=x;o++)
{
    if(x%o==0) cout<<o<<endl;
}
 
return 0;
}
