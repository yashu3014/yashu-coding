#include<iostream>
using namespace std;

int value(int n)
{
int unsetbit=0;
while(n)
{
if((n&1)==0)
{
unsetbit++;
}
n=n>>1;
}

return (1<<unsetbit);
}
int main()
{
   //Equal sum and XOR

int n;
cin>>n;

cout<<value(n);
    return 0;
}