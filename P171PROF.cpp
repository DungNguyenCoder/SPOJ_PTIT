#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl "\n"
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    ll a[n+5];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    int cnt = 1;
    ll tmp = 0;
    for(int i = 1; i < n; i++)
    {
        tmp += a[i-1];
        if(a[i] >= tmp)
            ++cnt;
        else
            tmp -= a[i];
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