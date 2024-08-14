#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

ll solon(string a,ll p)
{
    ll res = 0;
    int n = a.size();
    for(int i = 0; i < n; i++)
    {
        res = res*10 + a[i] - '0';
        res %= p;
    }
    return res;
}

ll binpow1(ll a, ll b, ll p)
{
    if(b == 1)  return a; //dieu kien dung
    if(b % 2 == 1)
        return (a*binpow1(a,b-1,p))%p;
    else
        return (binpow1(a,b/2,p)*binpow1(a,b/2,p))%p;
}


inline void solution()
{
    string a;
    ll b,p;
    cin >> a >> b >> p;
    ll ans = binpow1(solon(a,p),b,p);
    cout << ans << "\n";
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