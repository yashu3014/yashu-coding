#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{

    string s;
    //string f="";
   cin>>s;
   /* Method 1
 sort(s.begin(),s.end()); (For ascending order) 
for(int i=s.size();i>=0;i--)
{
f+=s[i];
}
cout<<f;*/
//for descending order
sort(s.begin(),s.end(),greater<int>());

cout<<s<<endl;
    return 0;
}