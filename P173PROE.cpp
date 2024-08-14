#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

struct b
{
	int pos;
	int s;
};

bool cmp(b e, b f)
{
	if (e.s == f.s)
	{
		return e.pos < f.pos;
	}
	return e.s > f.s;
}

inline void solution()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	b c[n];
	vector<int> d;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		c[i].pos = i + 1;
		c[i].s = a[i];
	}
	sort(c, c + n, cmp);
	cout << c[k - 1].s << endl;
	for (int i = 0; i < k; i++)
		d.push_back(c[i].pos);
	sort(d.begin(), d.end());
	for (int i = 0; i < d.size(); i++)
		cout << d[i] << " ";
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