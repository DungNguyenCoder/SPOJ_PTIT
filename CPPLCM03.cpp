#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mod 1000000007
#define TEST 1

ll ucln (ll a, ll b)
{
    if (a == 0 || b == 0) return a + b;
    while (b != 0)
    {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}


void solution()
{
    int n;
    cin >> n;
    int a[n + 5];
    ll h = 1, g;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        h *= a[i] * 1ll;
        h %= mod;
    }
    g = a[0];
    for(int i = 1; i < n; i++)
    {
        g = ucln(g,a[i]);
    }
    ll ans = 1;
    for(int i = 1; i <= g; i++)
    {
        ans *= h;
        ans %= mod;
    }
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