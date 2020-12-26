/*Given an array of integers,
 return a new array 
such that each element at index i of the new array is 

the product of all the numbers in the original array except the one at i.

For example,
 if our input was [1, 2, 3, 4, 5], 
the expected output would be [120, 60, 40, 30, 24].
 If our input was [3, 2, 1],
 the expected output would be [2, 3, 6].
*/


#include<iostream>

using namespace std;
int check(int arr[],int n)
{

int abc[n],k;
for(int i=0;i<n;i++)
{
k=1;
for(int j=0 ;j<n;j++)
{
if(j==i)
{
continue;
}
k*=arr[j];
}


cout<<k<<" ";
}

cout<<"/n/n/n";
return 0;
}


int main()
{
int t;
cin>>t;
while(t>0)
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}


cout<<check(arr, n);
 

t=t-1;
}

return 0;

}