#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
	int n, m;
	cin >> n >> m;
	if (n >= m)
		cout << n - m;
	else
	{
		int dem = 0;

		while (n < m)
		{
			if (m % 2 == 1)
				m++;
			else
				m /= 2;
			dem++;
		}
		dem += n - m;
		cout << dem;
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