#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 500000
int mod = 1000000007;
#define TEST 0

ll a[mx+5];
ll sum[mx+5];

inline void solution()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    ll tong = 0;
    if(sum[n]%3 == 0)
    {
        int cnt = 0;
        for(int i = n-1; i > 0; i--)
        {
            if(sum[i] == sum[n]/3)
                tong += cnt;
            if(sum[i] == sum[n]/3*2)
                ++cnt;
        }
    }
    cout << tong;
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