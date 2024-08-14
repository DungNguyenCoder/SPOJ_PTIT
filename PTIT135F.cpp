#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    int n,m;
    cin >> n >> m;
    char a[5*n+1][5*m+1];
    for(int i = 0; i < 5*n+1; i++)
    {
        for(int j = 0; j < 5*m+1; j++)
        {
            cin >> a[i][j];
        }
    }
    int tt[] = {0,0,0,0,0};
    int dauI = 1, dauJ = 1;
    for(int i = 0; i < n; i++)
    {
        if(i != 0)  dauI += 5;
        dauJ = 1;
        for(int j = 0; j < m; j++)
        {
            if(j != 0)  dauJ += 5;
            tt[0]++;
            for(int k = 0; k < 4; k++)
            {
                if(a[dauI+k][dauJ] == '*')
                {
                    ++tt[k+1];
                    --tt[k];
                }
            }
        }
    }
    for(int i = 0; i < 5; i++)
    cout << tt[i] << " ";
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