#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

ll find(string n, ll m)
{
    ll res = 0;
    for(int i = 0; i < n.size(); i++)
    {
        res = (res*10) + n[i] -'0';
        res %= m;
    }
    return res;
}

ll ucln(ll a, ll b)
{
    if(a == 0 || b == 0)    return a + b;
    while(b)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

inline void solution()
{
    ll a;
    string b;
    cin >> a >> b;
    ll c = find(b,  a);
    cout << c << "\n";
    // cout << ucln(a,c) << "\n";
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