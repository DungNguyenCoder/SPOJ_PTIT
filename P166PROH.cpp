#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

vector<int> a(mx, 0);
vector<int> b(mx, 0);

void res()
{
	for (int i = 2; i <= 3000; i++)
	{
		if (a[i] == 0)
		{
			for (int j = i; j <= 3000; j += i)
			{
				a[j] = 1;
				b[j]++;
			}
		}
	}
	for (int i = 0; i < 3000; i++)
	{
		if (b[i] == 2)
			b[i] = 1;
		else
			b[i] = 0;
	}
}

inline void solution()
{
	int n, s = 0;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		if (b[i] == 1)
			s++;
	}
	cout << s;
}

int main()
{
    faster();
    int t;
    res();
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