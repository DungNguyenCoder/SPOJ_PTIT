#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    vector<double> a(4);
    for(int i = 0; i < 4; i++)
        cin >> a[i];
    int t = 4;
    double max = 0;
    double k = 0;
    for(int i = 0; i <= t; i++)
    {
        double tu = abs(a[0]*a[3] - a[1]*a[2]);
        double mau = a[2]*a[3];
        double res = tu / mau;
        if(res > max)
        {
            max = res;
            k = i;
        }
        double x = a[0], y = a[1], z = a[2], t = a[3];
        a[1] = x;
        a[3] = y;
        a[0] = z;
        a[2] = t;
    }
    cout << k;
}

int main()
{
    faster();
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }    
    else        t = 1;
    while(t--)
    {
        solution();
    }
}