#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int getSum(int i,int j,int arr[])
{
    return arr[i]+arr[j]+j-i;
}
int fun(int arr[],int size_)
{ int smallest=0;
    for(int i=0;i<size_;i++)
    {
        for(int j=i+1;j<size_;j++)
        { if(smallest==0)
           smallest= getSum(i,j,arr);
          else if(smallest>getSum(i,j,arr))
           smallest=getSum(i,j,arr);
        }
    }
    return smallest;
}
int main()
{
    int n,len;
    cin>>n;
    for(int i=0;i<n;i++)
    {   cin>>len;
         int arr[len];
        for(int o=0;o<len;o++)
        {
            cin>>arr[o];
        }
        cout<<fun(arr,len)<<"\n";
 
    }
 
    return 0;
}
