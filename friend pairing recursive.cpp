#include<iostream>

using namespace std;

 int friendpair(int n)
{

if(n==0 || n==1 || n==2)
{
return n;
}

return friendpair(n-1)+friendpair(n-2)*(n-1);

}
int main()
{

  cout<<friendpair (4)<<endl;
 
    return 0;
}