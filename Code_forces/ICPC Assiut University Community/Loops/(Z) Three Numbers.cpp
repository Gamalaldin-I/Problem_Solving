#include <iostream>
#include"bits/stdc++.h"
#include"math.h"
using namespace std;

int main()
{
int start,end1,counter=0;
cin>>start>>end1;
for(int i=0;i<=start;i++)
{
    for(int o=0;o<=start;o++)
    {
        if((end1-i-o>=0)&&(end1-i-o<=start))
            counter++;
    }
}
cout<<counter;

    return 0;
}


