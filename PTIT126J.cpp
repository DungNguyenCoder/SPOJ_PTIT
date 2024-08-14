#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 10000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    ll n, k, s = 0, ss = 0, pos = 0;
    cin >> n >> k;
    ll a[n + 2];
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        ss += (a[i] - a[i - 1]) * (n + 1 - i);
        pos++;
        if ((s - ss) < k)
            break;
    }
    ss -= (a[pos] - a[pos - 1]) * (n + 1 - pos);
    cout << a[pos - 1] + (s - ss - k) / (n + 1 - pos);
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