#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{

    int n;
    cin>>n;
    int s,x=0;
   int flag=0;
    int a[n]; 
   
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    
    n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    
   
    
 for(int i=0;i<n;i++)
    {
    if(a[i]>(i+1))
    {
    flag=1;
    cout<<"Second"<<endl; 
    break;
    }
    else
    {
    x= a[i]-(i+1); 
    s=s+abs(x); 
    
      }
    }
  
    if(flag==0)
    {
    
    if(s%2!=0)
    {
    cout<<"First"<<endl;
    }

else
{
cout<<"Second"<<endl;
}
}
}
    return 0;
}