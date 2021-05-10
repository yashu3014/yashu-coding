#include<iostream>
#include<cmath>
using namespace std;
int value(int arr[],int n)
{
int bits=0;
for(int i=0;i<n;i++)
{
bits|=arr[i];
}

return bits*pow(2,n-1);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    
  n=sizeof(arr)/sizeof(arr[0]);
cout<<value(arr,n);
    return 0;
}