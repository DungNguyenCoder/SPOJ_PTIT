#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 1

ll ucln(ll a, ll b)
{
    if(a == 0 || b == 0)
        return a+b;
    while(b)
    {
        ll r = a%b;
        a = b;
        b = r;
    }
    return a;
}

ll bcnn(ll a, ll b)
{
    return a*b/ucln(a,b);
}

void solution()
{
    ll x,y,z,n;
    cin >> x >> y >> z >> n;
    ll res = (x*y)/__gcd(x,y);
    res = (res*z)/__gcd(res,z);
	if (ceil(pow(10, n - 1) / res) < ceil(pow(10, n) / res))
    {
        ll ans = (long long)ceil((pow(10,n-1))/res) * res;
        cout << ans << "\n";
    }
    else
        cout << "-1" << "\n";
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