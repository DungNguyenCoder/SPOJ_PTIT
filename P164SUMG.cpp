#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
	string a;
	cin >> a;
	vector<string> b;
	int s = 0;
	for (int i = 0; i <= a.size(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			string c = a;
			char k = j + 'a';
			c.insert(i, 1, k);
			b.push_back(c);
		}
	}
	sort(b.begin(), b.end());
	for (int i = 1; i < b.size(); i++)
	{
		if (b[i] == b[i - 1])
			s++;
	}
	cout << b.size() - s;
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