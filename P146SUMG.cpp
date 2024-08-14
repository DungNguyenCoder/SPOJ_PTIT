#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int r,c,a,b;
    cin >> r >> c >> a >> b;
    char y[r+1][c+1];
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= c; j++)
        {
            cin >> y[i][j];
        }
    }
    for(int i = 1; i <= r; i++)
    {
        for(int l = 1; l <= a; l++)
        {
            for(int j = 1; j <= c; j++)
            {
                for(int k = 1; k <= b; k++)
                    cout << y[i][j];
            }
            if(l != a)
                cout << "\n";
        }
        cout << "\n";
    }
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