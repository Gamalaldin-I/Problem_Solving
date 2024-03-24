#include <iostream>
using namespace std;

int main()
{
   int x,counter=1;
   cin>>x; int i=1;
   while( i<=x)
   {
       while(counter<=(x*4))
       { if(counter%4==0){cout<<"PUM\n";}
          else {cout<<counter<<" ";}
           counter++;}
   i++;}
return 0;
}
