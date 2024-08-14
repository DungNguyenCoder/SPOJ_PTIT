#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 1

ll chiadu(string a, ll b)
{
	ll du = 0;
	for (int i = 0; i < a.length(); i++)
		du = (du * 10 + a[i] - 48) % b;
	return du;
}
ll nhan(ll n, ll m, ll k)
{
	if (m == 0)
		return 0;
	if (m % 2 == 0)
		return nhan(n * 2 % k, m / 2, k) % k;
	return (nhan(n % k, m - 1, k) % k + n % k) % k;
}
ll poww(ll n, ll m, ll k)
{
	if (m == 0)
		return 1;
	ll p = poww(n, m / 2, k);
	ll res = nhan(p, p, k);
	if (m % 2 == 1)
		res = nhan(res, n, k);
	return res;
}

inline void solution()
{
    string a;
    ll b, m;
    cin >> a >> b >> m;
    ll k = chiadu(a, m);
    cout << poww(k, b, m) << "\n";
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