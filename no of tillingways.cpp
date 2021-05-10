#include<iostream>

using namespace std;

 int tillingways(int n)
{
if(n==1)
{
return 1;
}
if(n==0)
{
return 0;
}

return tillingways(n-1)+tillingways(n-2);

}
int main()
{

   cout<<tillingways (4)<<endl;
 
    return 0;
}