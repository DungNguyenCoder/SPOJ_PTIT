#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
	ll n, k, b[26] = {}, s = 0;
	cin >> n >> k;
	char a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[a[i] - 'A']++;
	}
	sort(b, b + 26);
	for (int i = 25; i >= 0; i--)
	{
		if (b[i] > k)
		{
			s += k * k;
			break;
		}
		else
		{
			s += b[i] * b[i];
			k -= b[i];
			if (k == 0)
				break;
		}
	}
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