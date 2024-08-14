#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    ll k;
    cin >> k;
    ll mul = 1;
    for(int i = 1; i <= 35; i++)
    {
        if(mul >= k)
            break;
        mul *= 2;
    }
    int ans = 0;
    ll tmp = mul;
    if(mul == k)
    {
        cout << mul << " " << 0;
        return;
    }
    while(k)
    {
        tmp /= 2;
        k -= tmp;
        if(k < 0)
            k += tmp;
        ++ans;
    }
    cout << mul << " " << ans;
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