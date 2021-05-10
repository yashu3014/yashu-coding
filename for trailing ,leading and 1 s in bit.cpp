#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
 //For trailing zeroes  cout<<__builtin_ctz(n);
   //For leading zeroes
cout<<__builtin_clz(n);

//for no of 1 bit
cout<<__builtin_popcount(n);
 return 0;
}