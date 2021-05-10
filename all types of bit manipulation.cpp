#include<iostream>

using namespace std;
int getbit(int n,int pos)
{
return ((n&(1<<pos))!=0);
}

int setBit(int n , int pos)
{
return (n |(1<<pos));
}


int clearbit(int n , int pos)
{
int mask=~(1<<pos);
return(n&mask);
}

int updateBit(int n,int pos,int value)
{
int mask=~(1<<pos);
n=(n&mask);
return(n|(value<<pos));
}
int main()
{

//For Getting bit at given index

// cout<<getbit(3,2); 

//For setting bit at given index

//cout<<setBit(5,1);

//For clear Bit

//cout<<clearbit(5,2);

//For update Bit 

//cout<<updateBit(5,1,1);
    return 0;
}