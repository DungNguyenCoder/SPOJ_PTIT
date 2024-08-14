#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
	ll s = 0;
	string a;
	cin >> a;
	for (int i = a.size() - 1; i >= 0; i--)
	{
		if ((a[i] - '0') % 4 == 0)
			s++;
		if (i > 0 && ((a[i - 1] - '0') * 10 + a[i] - '0') % 4 == 0)
			s += i;
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