#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

ll a[mx];

inline void solution()
{
    ll n;
    ll k;
    cin >> n >> k;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] < 0)
            ++cnt;
    }
    sort(a,a+n);
    if(cnt > 0)
    {
        if(cnt >= k)
        {
            for(int i = 0; i < k; i++)
                a[i] *= -1;
        }
        else
        {
            for(int i = 0; i < cnt; i++)
            {
                a[i] *= -1;
            }
            k -= cnt;
            if(k%2)
            {
                sort(a,a+n);
                a[0] *= -1;
            }    
        }
    }
    else if(k%2)
        a[0] *= -1;
    ll sum = 0;
    for(ll i = 0; i < n; i++)
    {
        sum += a[i];
    }
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