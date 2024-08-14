#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 1

inline void solution()
{
    ll a, b, n;
    cin >> a >> b >> n;
    ll h = a + n, k = b + n;
    if (a - k <= 0)
    {
        if ((h - b) <= 0)
            cout << 0 << "\n";
        else if ((h - b) % 2 == 1)
            cout << (h - b + 1) / 2 << "\n";
        else
            cout << (h - b) / 2 << "\n";
    }
    else
        cout << n + 1 << "\n";
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