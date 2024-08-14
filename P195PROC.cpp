#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
	int n, j = 0;
	cin >> n;
	ll a[n], s = 0, ans = 0, pos = 0;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	while (s <= 300)
	{
		s += a[j];
		j++;
		pos++;
	}
	ll k = pos - 1;
	cout << pos - 1 << " ";
	for (int i = 0; i < pos; i++)
	{
		ans += k * a[i];
		k--;
	}
	cout << ans;
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