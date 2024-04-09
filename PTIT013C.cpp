#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

struct toado
{
    ll x;
    ll y;
};

ll kc(toado a, toado b)
{
    ll ans = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
    return ans;
}

inline void solution()
{
    toado a,b;
    cin >> a.x >> a.y >> b.x >> b.y;
    if((a.y < 0 && b.y > 0) || (a.y > 0 && b.y < 0))
    {
        ll ans = kc(a,b); 
        cout << ans;
    }
    else
    {
        b.y *= -1;
        ll ans = kc(a,b);   
        cout << ans;
    }
    cout << endl;
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