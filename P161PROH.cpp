#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define mod 1000000007
#define TEST 0

int cnt[mx+5];

inline void solution()
{
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]] = 1;
    }
    for(int i = 1; i <= n+1; i++)
    {
        if(cnt[i] == 0)
        {
            cout << i;
            break;
        }
    }
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