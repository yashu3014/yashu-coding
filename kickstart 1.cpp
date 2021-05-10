#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int count=0;
   int n,k;
cin>>n>>k;
string s;
cin>>s;
for(int i=1;i<n/2;i++)
{
if(s[i]!=s[(n-i)+1])
{
count++;
}

}
if(count==k)
{
cout<<"Case #"<<t<<":"<<'0';
}
else
{
cout<<"Case #"<<t<<":"<<count;
}
}
    return 0;
}