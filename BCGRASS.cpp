#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};

char a[505][505];
int n,m;

void loang (int i, int j)
{
	a[i][j] = '.';
	for (int k = 0; k < 4; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == '#')
		{
			loang(i1,j1);
		}
	}
}

int main()
{
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == '#')
			{
				++cnt;
				loang(i,j);
			}
		}
	}
	cout << cnt;
}