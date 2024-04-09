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
    int a[n][3];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];
    }
    int cnt = 0;
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        dem = 0;
        for(int j = 0; j < 3; j++)
        {
            if(a[i][j] == 1)
                ++dem;
        }
        if(dem >= 2)
        {
            ++cnt;
        }
    }
    cout << cnt;
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