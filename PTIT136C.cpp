#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    if(n == 2)
    {
        cout << (1.0*n) / 2 << " " << (1.0*n) / 2;
    }
    else
    {
        int d = a[1][2];
        int a1 = (a[0][1] + a[0][2] - d) / 2;
        int b[n];
        b[0] = a1;
        for(int i = 1; i < n; i++)
        {
            b[i] = a[0][i] - b[0];
        }
        for(int i = 0; i < n; i++)
            cout << b[i] << " ";
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