#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

void solution()
{
    int n;
    int x, y;
    cin >> n >> x >> y;
    int a[n][n];
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int cnt = 1;
    while(h1 <= h2 && c1 <= c2)
    {
        for(int i = c1; i <= c2; i++)
        {
            a[h1][i] = cnt++;
        }
        ++h1;
        for(int i = h1; i <= h2; i++)
        {
            a[i][c2] = cnt++;
        }
        --c2;
        for(int i = c2; i >= c1; i--)
        {
            a[h2][i] = cnt++;
        }
        --h2;
        for(int i = h2; i >= h1; i--)
        {
            a[i][c1] = cnt++;
        }
        ++c1;
    }
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < n; j++)
    //         cout << a[i][j] << " ";
    //     cout << endl;
    // }
    --x;
    --y;
    cout << a[x][y] << "\n";
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