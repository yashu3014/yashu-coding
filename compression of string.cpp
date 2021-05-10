#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
string s="caaaabbbbbbbbccegggga>rtttttttt";

    char ans[100];
    ans[0]=s[0];
    int cnt=1;
    for(int i=1;i<s.size();i++)
    {
    if (s[i]!=s[i-1])
    {
    ans[cnt]=s[i];
    cnt++;
    }
    }
    cout<<ans;
    return 0;
}