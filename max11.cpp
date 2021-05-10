#include<iostream>
#include<string>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    
    int count=0;
    
    
   
for(int i=0;i<s.size();i++)
{
if(s[i]==s[i+1])
{
s=s.erase(1+i,i); 
}
} 

for(int i=0;i<s.size();i++)
{
if(s[i]=='1')
{
count++;
}
}

cout<<count<<endl;
}
    return 0;
}