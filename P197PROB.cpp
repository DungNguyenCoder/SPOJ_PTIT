#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 1

inline void solution()
{
    ll n, k, s = 0, ss = 0;
    cin >> n >> k;
    for (int i = 1; ss <= n; i++)
    {
        if (ss + i * k <= n)
        {
            ss += i * k;
            s += k;
        }
        else
        {
            ll m = n - ss;
            s += m / i;
            break;
        }
    }
    cout << s << "\n";
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