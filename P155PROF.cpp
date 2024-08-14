#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define TEST 0
int mod = 1000000007;

ll f[6];

inline void solution()
{
    ll n;
    ll x,y;
    cin >> x >> y >> n;
    if(x < 0)
        x += mod;
    if(y < 0)
        y += mod;
    if(n == 2)
        cout << y;
    else if(n == 1)
        cout << x;
    else
    {
        f[1] = x;
        f[2] = y;
        // cout << f[0] << " " << f[1] << " ";
        for(int i = 3; i <= 6; i++)
        {
            f[i] = ((f[i-1]%mod) - (f[i-2]%mod))%mod;
            if(f[i] < 0)
                f[i] += mod;
            f[i] %= mod;
            // cout << f[i] << " ";
        }
        ll res = n % 6;
        if(res == 0)
            cout << f[6];
        else
            cout << f[res];
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