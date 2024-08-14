#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

ll Data[10000];

ll binpow2(ll a, ll b)
{
    if(a == 0 && b == 0)
        return 1;
    else if(a == 0)
        return 0;
    else if(b == 0)
        return 1;
    else if(b == 1)
        return a;
    else
    {
        ll res = 1;
        while(b != 0)
        {
            if(b % 2 == 1)
            {
                a %= mod;
                res *= a;
                res %= mod;
            }
            b %= mod;
            b /= 2;
            b %= mod;
            a %= mod;
            a *= a;
            a %= mod;
        }
        res %= mod;
        return res;
    }
}

inline void solution()
{
    ll n,x;
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
    {
        cin >> Data[i];
    }
    ll sum = 0;
    int j = n - 1;
    for(ll i = 1; i <= n; i++)
    {
        sum += Data[i]*binpow2(x,j);
        --j;
        sum %= mod;
    }
    cout << sum << "\n";
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