#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int sumOfDigitsInRange(int num,int begin1,int end1)
{int temp=num;
    int sum=0;
    while(num>0)
    {
      sum+=num%10;
      num=num/10;
    }
    if(sum>=begin1&&sum<=end1) return temp;
        else return 0;
}

int sumInRange(int n,int a, int b)
{int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=sumOfDigitsInRange(i,a,b);
    }
    return sum;
}

int main()
{
   int n,a,b;
   cin>>n>>a>>b;
   cout<<sumInRange(n,a,b);

    return 0;
}
