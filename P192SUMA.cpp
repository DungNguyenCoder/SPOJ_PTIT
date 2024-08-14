#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define mod 1000000007
#define TEST 0

ll a[mx+5];

inline void solution()
{
    int n,k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    ll cnt = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i-1] >= a[i])
        {
            ll x = a[i-1] - a[i];
            x /= k;
            x++;
            a[i] += x*k;
            cnt += x;
        }
    }
    cout << cnt;
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