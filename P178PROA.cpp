#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
	while (1)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;
		if (n < mx)
			cout << n << "\n";
		else if (n < 5*mx)
			cout << n * 9 / 10 << "\n";
		else
			cout << n * 4 / 5 << "\n";
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