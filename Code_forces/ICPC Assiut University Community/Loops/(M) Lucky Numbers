#include <iostream>
#include"bits/stdc++.h"
using namespace std;
bool isLucky(int n);
int main()
{
   int n1,n2;int c=0;
   cin>>n1>>n2;
for(int i=n1;i<=n2;i++)
{
    if(isLucky(i))
    {
        cout<<i<<" ";
        c++;
    }

}
 if(c==0) cout<<-1;
    return 0;
}
bool isLucky(int n) {
    bool is=true;
    while (n > 0) {
        // Extracting the last digit
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            // If the digit is not 4 or 7, the number is not lucky
          is=false;
        }

        // Move to the next digit by dividing the number by 10
        n /= 10;
    }
    // If all digits are either 4 or 7, the number is lucky
    return is;
}
