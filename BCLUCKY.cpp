#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

ll a[mx+5];

inline void solution()
{
    ll n,x;
    cin >> n >> x;
    ll max = -1;
    map<ll,ll> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    // for(pair<ll,ll> x : mp)
    //     cout << x.first << " " << x.second << endl;
    ll min = 1e9+7;
    for(pair<ll,ll> x : mp)
    {
        if(x.second < min)
            min = x.second;
    }
    ll ans = -1;
    for(pair<ll,ll>  x : mp)
    {
        if(x.second == min && x.first > ans)
            ans = x.first;
    }
    ll sum = n * x - min*ans;
    // cout << min << " " << ans << endl;
    cout << sum;
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