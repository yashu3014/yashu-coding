#include <iostream>
#include<string.h>
using namespace std;
string fd(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=fd(s.substr(1));
    
    if(ch=='x')
    {
    return (ans+ch);
    }
    return (ch+ans);
}
int main() {
	string s;
	cin>>s;
cout<<	fd(s);
	return 0;
}