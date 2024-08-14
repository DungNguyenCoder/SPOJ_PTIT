#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
	int c, v0, v1, a, l, s = 0, ss = 0;
	cin >> c >> v0 >> v1 >> a >> l;
	while (s < c)
	{
		if (s > 0)
			s -= l;
		int k = v0 + ss * a;
		ss++;
		if (k > v1)
			k = v1;
		s += k;
	}
	cout << ss;
}

int main()
{
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}