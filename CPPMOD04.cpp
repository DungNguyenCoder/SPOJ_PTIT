#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

inline void solution()
{
    ll n;
    ll k;
    cin >> n >> k;
    ll sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i % k;
    }
    if(sum == k)
        cout << 1;
    else
        cout << 0;
    cout << "\n";
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