#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int b = pow(2, n);
	vector<vector<int>> a(b, vector<int>(n));
	int c = b / 2;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < c; j++)
			a[j][i] = 0;
		for (int j = c; j < 2 * c; j++)
			a[j][i] = 1;
		int d = 2 * c;
		int o = 0;
		while (d < b)
		{
			int g = 1;
			for (int k = d - 1; k >= 0; k--)
			{
				a[k + g][i] = a[k][i];
				g += 2;
			}
			o = d;
			d *= 2;
		}
		c /= 2;
	}
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j];
		cout << endl;
	}
}