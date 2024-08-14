#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define TEST 0
int mod = 1000000007;

inline void solution()
{
    int n,m;
    cin >> m >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    int MIN = mod;
    for(int i = 1; i <= n-m+1; i++)
    {
        MIN = min(MIN,a[i+m-1] - a[i]);
    }
    cout << MIN;
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