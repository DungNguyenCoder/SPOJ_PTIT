#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

// ####
// .#..
// ####
// ....

void solution()
{
    char a[5][5];
    for(int i = 1; i <= 4; i++)
        for(int j = 1; j <= 4; j++)
            cin >> a[i][j];
    // for(int i = 1; i <= 4; i++)
    //     for(int j = 1; j <= 4; j++)
    //         cout << a[i];
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            if(a[i][j] == '#')
            {
                if((a[i+1][j] == '#' && a[i][j+1] == '#' && (a[i+1][j+1] == '#' || a[i+1][j+1] == '.')) || (a[i+1][j+1] == '#' && a[i][j+1] == '#' && (a[i+1][j] == '#' || a[i+1][j] == '.')) || (a[i+1][j] == '#' && a[i+1][j+1] == '#' && (a[i][j+1] == '#' || a[i][j+1] == '.')))
                {
                    cout << "YES";
                    return;
                }
            }
            if(a[i][j] == '.')
            {
                if((a[i+1][j] == '.' && a[i][j+1] == '.' && (a[i+1][j+1] == '#' || a[i+1][j+1] == '.')) || (a[i+1][j+1] == '.' && a[i][j+1] == '.' && (a[i+1][j] == '#' || a[i+1][j] == '.')) || (a[i+1][j] == '.' && a[i+1][j+1] == '.' && (a[i][j+1] == '#' || a[i][j+1] == '.')))
                {
                    cout << "YES";
                    return;
                }
            }
        }
    }
    cout << "NO";
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