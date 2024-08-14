#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

ll c(int n, int k)
{
	ll ans = 1;
	for (int i = 1; i <= k; i++, n--)
		ans = ans * n / i;
	return ans;
}

inline void solution()
{
	while (1)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;
		cout << c(2 * n, n) / (n + 1) << endl;
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