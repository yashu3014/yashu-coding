#include<iostream>
#include<climits>
#include<numeric>
using namespace std;

int main()
{
int t;
cin>>t;
while(t>0)
{
int n,m;
cin>>n>>m;
int arr[n];
int abc[m];
int z;
int sum=0,add=0;
int temp;
int c=0;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int j=0;j<m;j++)
{
cin>>abc[j];
}
 n= sizeof(arr) /sizeof(arr[0]);
 sort(arr, arr+n);

 m= sizeof(abc) /sizeof(abc[0]);

sort(abc, abc+m, greater<>());

z=min(n,m);


sum=accumulate(arr, arr+n, sum);
add=accumulate(abc, abc+m, add); 

if(sum>add)
{
cout<<0;
}

else 
{
for(int i=0;i<z;i++)

{
temp=arr[i];
arr[i] = abc[i] ;
abc[i]= temp; 
c=c+1;
sum=0, add=0;
sum=accumulate(arr, arr+n, sum);
add=accumulate(abc, abc+m, add); 

if(sum>add)
{
break;
}
}
sum=0;add=0;
sum=accumulate(arr, arr+n, sum);
add=accumulate(abc, abc+m, add);

if(sum>add)
{
cout<<c;
}
else
{
cout<<-1;
}
}
t=t-1;
}
    return 0;
}