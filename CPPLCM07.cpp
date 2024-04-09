#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

ll ucln (ll a, ll b)
{
    if (a == 0 || b == 0) return a + b;
    while (b != 0)
    {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

ll bcnn (ll a, ll b)
{
    if (a == 0 || b == 0) return 0;
    ll res = a*b/ucln(a,b);
    return res;
}


void solution()
{
    ll x,y,z,n;
    cin >> x >> y >> z >> n;
    ll uoc = bcnn(x,bcnn(y,z));
    ll a = pow(10,n - 1);
    ll b = pow(10, n);
    if(uoc >= b)
        cout << "-1";
    else if(a % uoc == 0)
        cout << a;
    else if(a % uoc)
    {
        ll res = (a/uoc + 1)*uoc;
        cout << res;
    }
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