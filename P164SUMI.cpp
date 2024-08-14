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
    int n,k;
    cin >> n >> k;
    int a[n+5];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] >= a[k] && a[i] > 0)
            ++cnt;
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