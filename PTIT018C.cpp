#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 1

int chiadu(string a, ll b)
{
	ll du = 0;
	for (int i = 0; i < a.length(); i++)
		du = (du * 10 + a[i] - 48) % b;
	return du;
}

ll pow1(ll n, ll m, ll p)
{
	if (m == 1)
		return n;
	if (m % 2 == 0)
		return (pow1(n, m / 2, p) * pow1(n, m / 2, p)) % p;
	else
		return (n * pow1(n, m - 1, p)) % p;
}

inline void solution()
{
    string a;
    long long b, m;
    cin >> a >> b >> m;
    long long k = chiadu(a, m);
    cout << pow1(k, b, m) << "\n";
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