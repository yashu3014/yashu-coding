#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
   float k1,k2,k3,v,z=0,y=0;
cin>>k1>>k2>>k3>>v;

z=k1*k2*k3*v;

z=100/z;

y = round(z*100)/100;

if(y<9.57)
{
cout<<"yes"<<endl;
}

else
{
cout<<"no"<<endl;
}
}
    return 0;
}
    