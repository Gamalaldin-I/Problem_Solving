#include <iostream>
#include"bits/stdc++.h"
#include"math.h"
using namespace std;

int main()
{
int num=0,n=0,temp1=0,temp2=0;
cin>>num;
for(int i=0;i<num;i++)
{  cout<<n<<" ";
temp2=temp1;
temp1=n;
n=temp1+temp2;
    if(n==0) { n++;temp1=0;}

}

    return 0;
}


