#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

ll gt[34];

void giaithua()
{
    gt[1] = 1;
    for(int i = 2; i < 34; i++)
        gt[i] = 1;
    for(int i = 2; i < 34; i++)
    {
        gt[i] = gt[i - 1] * i;
    }
}

void solution()
{
    ll n;
    cin >> n;
    int i = 1;
    ll ans = 0;
    while(n)
    {
        ll a = n % 10;
        ans += (gt[i]*a);
        ++i;
        n /= 10;
    }
    cout << ans << "\n";
}

int main()
{
    faster();
    int t;
    giaithua();
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