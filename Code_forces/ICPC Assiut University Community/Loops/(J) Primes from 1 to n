#include <iostream>
#include"bits/stdc++.h"
using namespace std;
void prime(int x);
int main()
{
   int n;
   cin>>n;
   for(int i=2;i<=n;i++)
   {
       prime(i);
   }

    return 0;
}
void prime(int x)
{ int counter=0;
    for(int i=x;i>=1;i--)
    {
        if(x%i==0)
        {
         counter++;
        }
    }
    if(counter==2) cout<<x<<" ";
}
