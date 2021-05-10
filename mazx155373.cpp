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
    int y;
    cin>>s;
    
    int  count=0;
    
  

for(int  i=0;i<s.size();i++)
{
if(s[i]=='1'&&s[i]!=s[i+1])
{
count++;
}
else if((s[i]==s[i+1]))
{
continue;
}

}
cout<<count<<endl;
}
    return 0;
}