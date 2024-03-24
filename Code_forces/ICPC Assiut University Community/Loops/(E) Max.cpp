#include <iostream>
using namespace std;
int main()
{int x;
cin>>x;
int arr[x];
for(int i=1;i<=x;i++)
{
cin>>arr[i];
}

int max=arr[1];

for(int i=1;i<=x;i++)
{
if(max<arr[i]){ max=arr[i];}

}
cout<< max;
return 0;
}
