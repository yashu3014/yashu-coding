#include<iostream>
using namespace std;

int pairsum(int arr[],int n, int k)
{

int low=0;
int high=n-1;
while(low<high)
{
if(arr[low]+arr[high]==k)
{
cout<<low<<" "<<high<<endl;
return true;
}
else if(arr[low]+arr[high]>k)
{
high--;
}
else
{
low++;
}
}
return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
    cin>>arr[i];
    }
    n=sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    int k;
    cin>>k;
    
    cout <<pairsum(arr, n, k);
    return 0;
}