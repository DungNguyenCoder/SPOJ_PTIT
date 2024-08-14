#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    ll n;
    ll x,y;
    cin >> x >> y >> n;
    if(n == 2)
        cout << y;
    else if(n == 1)
        cout << x;
    else
    {
        ll f;
        for(int i = 3; i <= n; i++)
        {
            f = y - x;
            x = y;
            y = f;
        }
        cout << f;
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