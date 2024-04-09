#include <iostream>
#include <cmath>
using namespace std;

long chua[11],cay[11],a[11],n,schua=1,scay=0,min1=1000000000;

void init()
{
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> chua[i] >> cay[i];
}

void test()
{
    schua=1;scay=0;
    int t=0,l=0;
    for(int i=0;i<n;i++)
    {
        if(a[i])
        {
            t=1;

            if(chua[i]!=0)
                schua*=chua[i];
            scay+=cay[i];
        }
    }
    if(t)
    {

        long d=schua-scay;
        if(d<0) d=d*(-1);
        if(d<min1) min1=d;
    }
}

void tim(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n-1) test();
        else tim(i+1);
    }
}

int main()
{
    init();
    if(n==1)
    {
        min1=chua[0]-cay[0];
        if(min1<0) min1*=-1;
        cout << min1;
    }
    else
    {
        tim(0);
        cout << min1 ;
    }
}