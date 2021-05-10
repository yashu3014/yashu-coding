#include<iostream>
using namespace std;


int main()
{
    int a,b,c;
    int arr[5];
    cin>>a>>b>>c;
   int  count=0;
    arr[0]=a;
   arr[1]=b;
arr[2]=c;
arr[3]=a;

for(int i=0;i<3;i++)
{
if(arr[i]==arr[i+1])
{
count++;
}
}
if(count!=0)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}

   
    return 0;
}