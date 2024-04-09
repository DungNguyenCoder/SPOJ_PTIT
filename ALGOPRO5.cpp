#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

ll binpow1(ll a, ll b)
{
    if(b == 0)  return 1; //dieu kien dung
    ll x = binpow1(a,b/2); //a^(b/2)
    if(b % 2 == 1)
        return x*x*a;
    else
        return x*x;
}


inline void solution()
{
    int n;
    cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n; i++)
    {
        ll res = binpow1(2,i);
        sum += res;
    }
    cout << sum;
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