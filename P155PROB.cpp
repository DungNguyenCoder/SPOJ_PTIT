#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    ll x,s;
    cin >> x >> s;
    ll a[5];
    for(int i = 0; i < 5; i++)
        cin >> a[i];
    ll res = x*s;
    for(int i = 0; i < 5; i++)
    {
        a[i] = (a[i] - res);
    }
    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";
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