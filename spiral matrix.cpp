#include<iostream>
using namespace std;

int main()
{
   int n, m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>arr[i][j];
}
}
int row_srt=0, row_end=n-1, column_srt=0, column_end=m-1;
while(row_srt<=row_end && column_srt<=column_end)
{
//for 1 traverse column print
for(int col=column_srt;col<=column_end;col++)

{
cout<<arr[row_srt][col]<<" ";
}
row_srt++;
//for 2 traverse
for(int row=row_srt;row<=row_end;row++)
{
cout<<arr[row][column_end]<<" ";
}
column_end--;
//for 3 traverse
for(int col=column_end;col>=column_srt;col--)
{
cout<<arr[row_end][col]<<" ";
}
row_end--;
for(int row=row_end;row>=row_srt;row--)
{
cout<<arr[row][column_srt]<<" ";
}
column_srt++;
}
    return 0;
}