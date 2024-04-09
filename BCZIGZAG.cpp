#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int a[n][n];
    int huong = 1;
    int cnt = 1;
    int i = 0, j = 0;
    int demngang = 0, demdoc = 0;
    while(i != n*n - 1 && j != n*n - 1)
    {
        a[i][j] = cnt;
        ++cnt;
        if(i == 0 && j == demdoc)
        {
            ++j;
            ++demdoc;
        }
        else if(i == demngang && j == 0)
        {
            ++i;
            ++demngang;
        }
        else
        {
            
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