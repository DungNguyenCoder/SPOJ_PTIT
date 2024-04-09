#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    ll g,y;
    cin >> g >> y;
    ll denta = sqrt((g-4)*(g-4) - 4*4*y);
    ll a = (g - 4 + denta) / (2*2);
    ll b = (g - 4 - denta) / (2*2);
    ll r,d;
    if(y % a == 0)
        r = a;
    else if(y % b == 0)
        r = b;
    d = y / r;
    r += 2;
    d += 2;
    cout << min(r,d) << " " << max(r,d);
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