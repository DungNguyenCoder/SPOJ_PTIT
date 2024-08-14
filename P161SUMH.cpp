#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int n;
    cin >> n;
    char a[n+5][n+5];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            char x = a[i][j];
            if(x == 'x')
            {
                if(a[i][j+1] == 'o')
                    ++cnt;
                if(a[i][j-1] == 'o')
                    ++cnt;
                if(a[i+1][j] == 'o')
                    ++cnt;
                if(a[i-1][j] == 'o')
                    ++cnt;     
            }
        }
    }
    if(cnt%2 == 0)
        cout << "YES";
    else
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