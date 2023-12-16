#include <iostream>
#include"bits/stdc++.h"
#include"math.h"
using namespace std;
string convertToBinary(int num)
{string binary="";
while(num>0)
{int res=num%2;
 num/=2;
 if(res==1)
  binary+='1';
  else binary+='0';
}
return binary;}

int countOnes(string binary)
{
    int counter=0;
    for(int i=0;i<binary.size();i++)
    {
     if(binary[i]=='1')
        counter++;
    }
    return counter;
}
int convertIntoDesimal(int ones)
{int desimalNum=0;
    for(int i=0;i<ones;i++)
    {
        desimalNum+=pow(2,i);
    }
    return desimalNum;
}

int main()
{
   int times;
   cin>>times;
   for(int i=0;i<times;i++)
   {int n;
   cin>>n;
    string binary=convertToBinary(n);
   int ones=countOnes(binary);
   cout<<convertIntoDesimal(ones)<<"\n";
   }


    return 0;
}
