#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

char a[105][105];

void solution()
{
    while(1)
    {
        int n,m;
        cin >> n >> m;
        if(n == 0 || m == 0)
            break;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                char x;
                cin >> x;
                if(x == '.')
                    a[i][j] = '0';
                else
                    a[i][j] = x;
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(a[i][j] == '*')
                {
                    for(int k = i - 1; k <= i + 1; k++)
                    {
                        for(int l = j - 1; l <= j + 1; l++)
                        {
                            if(k >= 0 && k < n && l >= 0 && l < m)
                                if(a[k][l] != '*')
                                    ++a[k][l];
                        }
                    }
                }
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << a[i][j];
            }
            cout << "\n";
        }
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