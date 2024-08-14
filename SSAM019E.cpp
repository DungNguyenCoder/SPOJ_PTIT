#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    int n,s;
    cin >> n >> s;
    int a[n+5];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    int ans = 0;
    for(int i = n-1; i >= 0; i--)
    {
        int m = s/a[i];
        ans += m;
        s -= a[i]*m;
    }
    cout << ans;
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