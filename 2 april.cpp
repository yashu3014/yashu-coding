#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
   float k1,k2,k3,v,z=0;
cin>>k1>>k2>>k3>>v;

z=k1*k2*k3*v;

z=100/z;

printf("%.2f",z);

if(z<9.58)
{
cout<<"yes"<<endl;
}

else
{
cout<<"No"<<endl;
}
}
    return 0;
}
