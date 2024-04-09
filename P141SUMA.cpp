#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

struct toado
{
    ll x;
    ll y;
};

inline void solution()
{
    toado a,b,c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    ll ccw = (b.x - a.x)*(c.y-a.y) - (b.y-a.y)*(c.x-a.x);
    if(ccw < 0)
    {
        cout << "RIGHT";
    }
    else if(ccw > 0)
    {
        cout << "LEFT";
    }
    else
    {
        cout << "TOWARDS";
    }
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