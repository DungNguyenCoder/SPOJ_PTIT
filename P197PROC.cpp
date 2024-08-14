#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define mod 1000000007
#define TEST 0

ll a[mx+5];

inline void solution()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum1 = 0;
    ll sum2 = 0;
    for(int i = 0; i < n; i++)
    {
        sum1 += a[i];
        if(sum1 < 0)
            sum1 = 0;
        if(sum1 > sum2)
            sum2 = sum1;
    }
    cout << sum2;
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