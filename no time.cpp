#include<iostream>
using namespace std;

int main()
{
int n,h,x;
cin>>n>>h>>x;
bool flag=0;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}

for(int i=0;i<n;i++)
{
if(x+arr[i]==h)
{
flag=1;
}
}
if(flag==1)
{
cout<<"yes";
}
else
{
cout<<"no";
}
    return 0;
    
}