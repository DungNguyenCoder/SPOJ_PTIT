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
	int a[n], b[n], s = 0;
	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i];
	for (int i = 0; i < n; i++)
	{
		int ok = 0;
		for (int j = 0; j < n; j++)
			if (i != j && b[j] == a[i])
				ok = 1;
		if (ok == 0)
			s++;
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