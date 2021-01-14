#include<iostream>
using namespace std;

int main()
{
    int n, i, j, m,x;
    cin>>n>>m;
    bool flag=false;
    int arr[n][m];
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {
    cin>>arr[i][j];
    }
    }
    cin>>x;
    for( i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {
    if(arr[i][j]==x)
    {
    
    cout<<i<<" "<<j<<endl;
    flag =true;
    
    }
    }
    
    }
    if(flag)
    {
    cout<<"ELEMENT FOUND";
    }
    else
    {
   cout<< "Not found";
    }
    return 0;
}