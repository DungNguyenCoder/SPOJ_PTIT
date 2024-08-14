#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int r,c;
    cin >> r >> c;
    char a[r+1][c+1];
    for(int i = 1; i <= r; i++)
        for(int j = 1; j <= c; j++)
            cin >> a[i][j];
    int cnt = 0;
    int check = 0;
    int check1 = 1;
    for(int i = 1; i <= r; i++)
    {
        check1 = 1;
        for(int j = 1; j <= c; j++)
        {
            if(check1)
            {
                check1 = 0;
                check = 0;
                for(int k = 1; k <= c; k++)
                {
                    if(a[i][k] == 'S')
                    {
                        check = 1;
                        break;
                    }
                }
                if(check)
                    break;
            }
            ++cnt;
            a[i][j] = '0';
        }
    }
    int check2 = 0;
    int check3 = 0;
    for(int i = 1; i <= c; i++)
    {
        check3 = 1;
        check2 = 0;
        for(int j = 1; j <= r; j++)
        {
            if(check3)
            {
                check3 = 0;
                for(int k = 1; k <= r; k++)
                    if(a[k][i] == 'S')
                    {
                        check2 = 1;
                        break;
                    }
                if(check2)
                    break;
            }
            if(a[j][i] != '0')
                ++cnt;
            a[j][i] = '0';
        }
    }
    cout << cnt;
    // for(int i = 1; i <= r; i++)
    // {
    //     for(int j = 1; j <= c; j++)
    //         cout << a[i][j];
    //     cout << endl;
    // }
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