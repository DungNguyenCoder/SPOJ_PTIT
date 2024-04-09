#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 2000000
#define TEST 1

ll prime[mx+5];

void sieve()
{
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 2; i * i <= mx; i++)
    {
        if(!prime[i])
        {
            for(int j = i * i; j <= mx; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}

inline void solution()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    for(int i = 1; i * i <= n; i++)
    {
        if(!prime[i])
            ++cnt;
    }
    cout << cnt << "\n";
}

int main()
{
    faster();
    int t;
    sieve();
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