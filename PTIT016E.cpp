#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
	int n;
	cin >> n;
	ll a[n][11], res = -1111;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 11; j++)
			cin >> a[i][j];
	for (int i1 = 0; i1 < n - 2; i1++)
	{
		for (int i2 = i1 + 1; i2 < n - 1; i2++)
		{
			for (int i3 = i2 + 1; i3 < n; i3++)
			{
				long long s = 0;
				for (int i = 0; i < 11; i++)
					s += max(a[i1][i], max(a[i2][i], a[i3][i]));
				res = max(s, res);
			}
		}
	}
	cout << res;
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