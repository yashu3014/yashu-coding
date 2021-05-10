#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
int f=1;
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
(count==k)?cout<<"Case #"<<f<<":"<<'0':cout<<"Case #"<<f<<":"<<count;  
f++; 
}

    return 0;
}