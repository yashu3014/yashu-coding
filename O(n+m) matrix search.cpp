#include<iostream>
using namespace std;

int main()
{
    int n, i, j, m,x;
    cin>>n>>m;
    bool flag=false;
    int arr[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cin>>x;
    int r=0,c=m-1;
    while(r<n and c>=0)
    {
        if(arr[r][c]==x)
        {

            flag =true;

        }
      if(arr[r][c]>x)
        {
            c--;
        }
        else
        {
            r++;
        }


    }
    if(flag)
    {
        cout<<"ELEMENT FOUND"<<r<<" "<<c;
    }
    else
    {
        cout<< "Not found";
    }
    return 0;
}