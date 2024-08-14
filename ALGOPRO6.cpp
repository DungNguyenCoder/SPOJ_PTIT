#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int ngay;
    int s=0;
    for (int i=1; i<=12; i++)
    {
        if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
            ngay=31;
        else if (i==2)
        {
            if ((n%4==0 && n%100!=0) || (n%400==0))
                ngay=29;
            else
                ngay=28;
        }
        else
            ngay=30;
            
        for (int j=1; j<=ngay; j++)
        {
            s=s+(j/10)+(j%10)+(i/10)+(i%10)+n/1000+(n/100)%10+(n/10)%10+n%10;
        }
    }
    cout<<s;
}