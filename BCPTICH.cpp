#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1
//(r+l)(r-l+1)
void solution()
{
    ll n;
    ll t;
    cin >> t >> n;
    n *= 2;
    int cnt = 0;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            ll x = n / i, y = i;
            if((y+x-1) % 2 == 0)
            {
                ll r = (y + x - 1) / 2;
                ll l = x - r;
                if(l >= 1 && r > 1)
                    ++cnt;
            }
        }
    }
    cout << t << " " << --cnt << endl;
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