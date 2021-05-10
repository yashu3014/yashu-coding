//replce pi with 3.14
#include <iostream>
#include<string.h>
using namespace std;
void replacepi(string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]=='p'&&s[1]=='i')
    {
        cout<<"3.14";
         replacepi(s.substr(2));
    }
    else{
    cout<<s[0];
    replacepi(s.substr(1));
    }
}
int main() {
	string s;
	cin>>s;
	replacepi(s);
	return 0;
}