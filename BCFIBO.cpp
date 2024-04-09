#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000007
#define TEST 0

void solution()
{
    int n;
    cin >> n;
    ll a = 0;
    ll b = 1;
    for(ll i = 1; i < n; i++)
    {
        ll c = (a % mx + b % mx) % mx;
        a = b;
        b = c;
    }
    cout << b;
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