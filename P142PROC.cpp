#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int v[9][10];
    int k = 1;
    for(int i = 1; i <= 8; i++)
    {
        for(int j = 1; j <= 9; j++)
        {
            v[i][j] = k;
            if(k == 1)
            {
                k = 0;
                continue;
            }
            if(k == 0)
            {
                k = 1;
                continue;
            }
        }
    }
    // for(int i = 1; i <= 8; i++)
    // {
    //     for(int j = 1; j <= 8; j++)
    //     {
    //         cout << a[i][j];
    //     }
    //     cout << endl;
    // }
    int r1,c1,r2,c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int a = 0, b = 0, c = 0;
    c = max(abs(r1-r2),abs(c1-c2));
    if(r1 != r2 && c1 != c2)
        a = 2;
    else if(r1 == r2 && c1 == c2)
        a = 0;
    else
        a = 1;
    if(v[r1][c1] != v[r2][c2])
        b = 0;
    else if(abs(r1-r2) == abs(c1-c2))
        b = 1;
    else
        b = 2;
    cout << a << " " << b << " " << c;
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