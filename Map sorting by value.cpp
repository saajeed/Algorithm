
#include <bits/stdc++.h>
using namespace std;
int digitSum(int n)
{
    int sum = 0 ;
    while(n!=0)
    {
        sum = sum+ n%10;
        //cout<<sum<<endl;
        n=n/10;
    }
    return sum;
}
int main()
{
   int number = 567;
   while(1)
   {
       number = digitSum(number);
       if(number == number % 10)
       cout<<number<<endl;
       break;
   }
   
   return 0;
}
