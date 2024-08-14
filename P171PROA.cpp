#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
	ll l, r, x;
	cin >> l >> r >> x;
	ll b = x, s = 1;
	int ok = 0;
	if (s >= l && s <= r)
	{
		cout << s << " ";
		ok = 1;
	}
	if (b >= l && b <= r)
	{
		cout << b << " ";
		ok = 1;
	}
	if (b <= r)
	{
		s = b;
		while ((r / s) >= b)
		{
			x = x * b;
			s = x;
			if (s >= l && s <= r)
			{
				cout << s << " ";
				ok = 1;
			}
		}
	}
	if (ok == 0)
		cout << "-1";
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