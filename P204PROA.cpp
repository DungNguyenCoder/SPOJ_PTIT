#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
	ll n, a, b, c;
	cin >> n >> a >> b >> c;
	if (a < b - c)
		cout << n / a;
	else
	{
		ll s = 0;
		while (n >= b)
		{
			ll k = n / b;
			s += k;
			n = n - k * b + c * k;
		}
		ll k = n / a;
		s += k;
		cout << s;
	}
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