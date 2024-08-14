#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 1

int max(int a, int b)
{
    if(a>b)
        return a;
    return b;
}

int sang(ll l, ll r)
{
    ll cnt = 0;
    ll nt[r-l+10];
    for(int i = 0; i <= r-l+1; i++)
        nt[i] = 1;
    for(int i = 2; i <= sqrt(r); i++)
        for(int j = max(i*i,(l+i-1)/i*i); j <= r; j += i)
            nt[j-l] = 0;
    if(l <= 1)
        nt[1-l] = 0;
    for(int i = l; i <= r; i++)
    {
        if(nt[i-l])
            ++cnt;
    }
    return cnt;
}

inline void solution()
{
    ll l,r;
    cin >> l >> r;
    cout << sang(l,r) << "\n";
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