#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
int i;
    string str="ABCDEFGHIYDHBRNF";
    
    for( i=0;i<str.length();i++)
    {
    if(str[i]>='A'&& str[i]<='Z')
    {
    str[i]+=32;//for upper +becomes -
    }
    }
   
    cout<<str;
    return 0;
}