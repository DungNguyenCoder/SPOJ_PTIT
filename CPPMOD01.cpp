#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

ll binpow2(ll a, ll b, ll p)
{
    ll res = 1;
    while(b != 0)
    {
        if(b % 2 == 1)
        {
            a %= p;
            res *= a;
            res %= p;
        }
        b %= p;
        b /= 2;
        b %= p;
        a %= p;
        a *= a;
        a %= p;
    }
    res %= p;
    return res;
}


inline void solution()
{
    ll x,y,p;
    cin >> x >> y >> p;
    cout << binpow2(x,y,p) << "\n";
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