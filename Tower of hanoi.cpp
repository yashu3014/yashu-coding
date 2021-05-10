#include<iostream>
using namespace std;
void towerofhanoi(int n, char scr, char dest,char helper)
{
if(n==0)
{
 return;
}

towerofhanoi(n-1, scr, helper, dest);

cout<<"Move from "<< scr<< "to"<<dest<<endl;

towerofhanoi(n-1, helper, dest, scr);

}
int main()         
{
   int n;
   char scr, dest, helper;
   cin>>n>>scr>>dest>>helper;
   towerofhanoi(n, scr, dest, helper);
    return 0;
}