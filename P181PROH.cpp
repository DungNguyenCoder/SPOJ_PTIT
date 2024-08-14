#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    int a,b;
	cin >> a >> b;
	if (b == a)
		cout << "infinity";
	else if (a > b)
	{
		int k = a - b, s = 0;
		for (int i = 1; i < sqrt(k); i++)
		{
			if (k % i == 0)
			{
				if (i > b)
					s++;
				if (k / i > b)
					s++;
			}
		}
		int j = sqrt(k);
		if (j * j == k && k % j == 0 && j > b)
			s++;
		cout << s;
	}
	else
		cout << 0;
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