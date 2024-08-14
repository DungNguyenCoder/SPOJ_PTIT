#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

ll cp(ll n)
{
    ll a = sqrt(n);
    if(a*a == n)
        return 1;
    return 0;
}

ll kt(ll x)
{
    for(ll i = 1; i <= sqrt(x); i++)
    {
        if(x%i == 0)
        {
            if(cp(i) && sqrt(i) > 1)
                return 0;
            if(cp(x/i) && sqrt(x/i) > 1)
                return 0;
        }
    }
    return 1;
}

void solution()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0)
        {
            if(i != sqrt(n))
            {
                v.push_back(i);
                v.push_back(n/i);
            }
            else
            {
                if(cp(n))
                {
                    v.push_back(i);
                }
                else
                {
                    v.push_back(i);
                    v.push_back(n/i);
                }
            }
        }
    }
    sort(v.begin(),v.end(),greater<ll>());
    for(ll i = 0; i < v.size(); i++)
    {
        if(kt(v[i]))
        {
            cout << v[i];
            return;
        }
    }
}

int main()
{
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}