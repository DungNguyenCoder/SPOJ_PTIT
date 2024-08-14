#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 1

inline void solution()
{
    ll x1, x2, x3, a[3];
    cin >> x1 >> x2 >> x3;
    a[0] = abs(x1 - x2);
    a[1] = abs(x1 - x3);
    a[2] = abs(x2 - x3);
    sort(a, a + 3);
    cout << a[0] + a[1] << "\n";
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