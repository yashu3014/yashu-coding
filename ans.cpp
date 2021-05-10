#include<iostream>
#include<cmath>
using namespace std;


int main()
{
int t;
cin>>t;


while(t--)
{
    int a,b,c;
    cin>>c;
 int d;
d=log(c)/log(2);
   

    a=pow(2,d)-1;
    b=a^c;

    
    cout<<a*b<<"..."<<a<<endl;
    
  }
    return 0;
}