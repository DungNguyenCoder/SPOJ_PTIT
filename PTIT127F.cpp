#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    int cnt = 0;
    int x = n;
    for(int i = n; i >= 1; i--)
        if(a[i] == x)
            x--;
        else
            ++cnt;
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