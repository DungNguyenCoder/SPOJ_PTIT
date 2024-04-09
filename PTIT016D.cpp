#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    int n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    ll a = v[0];
    sort(v.rbegin(),v.rend());
    ll sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == a)
        {
            sum += a;
        }
        else
        {
            if(cnt < k)
            {
                sum += v[i];
                ++cnt;
            }
            else
            {
                sum -= v[i];
            }
        }
        // cout << sum << endl;
        // ++cnt;
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