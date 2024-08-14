#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

vector<int> a(100003, 1);

void res()
{
	a[1] = 0;
	a[0] = 0;
	for (long long i = 2; i <= 100000; i++)
	{
		if (a[i] == 1)
		{
			for (long long j = i * i; j <= 100000; j += i)
			{
				a[j] = 0;
			}
		}
	}
}

inline void solution()
{
	while (1)
	{
		string c;
		cin >> c;
		if (c == "0")
			break;
		int ss = 0;
		for (int i = 0; i < c.size(); i++)
		{
			int s = 0;
			for (int j = i; j < c.size(); j++)
			{
				s = s * 10 + c[j] - '0';
				if (s > 100000)
					break;
				if (a[s] == 1 && s > ss)
					ss = s;
			}
		}
		cout << ss << endl;
	}
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