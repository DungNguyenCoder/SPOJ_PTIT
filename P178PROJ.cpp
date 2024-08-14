#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
	ll n, x, s = 0;
	priority_queue<long long, vector<long long>, greater<long long>> q;
	cin >> n;
	for (long long i = 0; i < n; i++)
	{
		cin >> x;
		x = x % mod;
		q.push(x);
	}
	while (1)
	{
		int a = q.top();
		q.pop();
		int b = q.top();
		q.pop();
		ll k = (a % mod + b % mod) % mod;
		q.push(k);
		s += (a % mod + b % mod) % mod;
		if (q.size() == 1)
			break;
	}
	s = s % mod;
	cout << s;
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