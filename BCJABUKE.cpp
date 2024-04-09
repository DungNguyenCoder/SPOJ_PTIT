#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

ll a[100];

void solution()
{
    ll n,m;
    cin >> n >> m;
    ll j;
    cin >> j;
    for(int i = 0; i < j; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    if(n - m == 1)
    {
        for(int i = 0; i < j; i++)
        {
            if(a[i] == n)
                ++cnt;
        }
    }
    else
    {
        ll x = 1;
        ll y = m;
        for(int i = 0; i < j; i++)
        {
            if(a[i] >= x && a[i] <= y)
                continue;
            ll MIN = min(abs(a[i] - x),abs(a[i] - y));
            cnt += MIN;
            if(a[i - 1] < a[i])
            {
                x += MIN;
                y += MIN;
            }
            else
            {
                x -= MIN;
                y -= MIN;
            }
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