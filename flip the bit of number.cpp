#include<iostream>
#include<cmath>
using namespace std;
int value(int n)
{
int long x=(log(n)/log(2))+1;
for(int i=0;i<x;i++)
{
n=(n^(1<<i));
}
cout<<n;
}
int main()
{
int n;
cin>>n;

 value(n);
    return 0;
}