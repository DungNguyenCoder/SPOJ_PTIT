#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    set<ll> se;
    for(int i = 0; i < 4; i++)
    {
        ll x;
        cin >> x;
        se.insert(x);
    }
    int n = se.size();
    int ans = 4 - n;
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