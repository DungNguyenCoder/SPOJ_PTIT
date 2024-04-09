#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

int a[25][61];


inline void solution()
{
    int n;
    cin >> n;
    for(int i = 1; i <= 24; i++)
    {
        for(int j = 1; j <= 60; j++)
        {
            a[i][j] = 0;
        }
    }
    int MAX = 0;
    for(int i = 1; i <= n;i++)
    {
        int x;
        int y;
        cin >> x >> y;
        a[x][y]++;
        MAX = max(MAX,a[x][y]);
    }
    cout << MAX;
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