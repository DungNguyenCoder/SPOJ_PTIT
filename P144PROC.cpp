#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 0

ll binpow1(ll a, ll b)
{
    if(b == 0)  return 1; //dieu kien dung
    if(b == 1)  return a;
    ll x = binpow1(a,b/2); //a^(b/2)
    x %= mod;
    if(b % 2 == 1)
        return ((x*x)%mod*(a%mod))%mod;
    else
        return (x*x)%mod;
}


inline void solution()
{
    while(1)    
    {
        ll a,b;
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        ll ans = binpow1(a,b);
        cout << ans << "\n";
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