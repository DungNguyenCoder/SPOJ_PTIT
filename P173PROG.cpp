#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a;
		cin >> a;
		if (next_permutation(a.begin(), a.end()))
			cout << a << "\n";
		else
			cout << "BIGGEST\n";
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