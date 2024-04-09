#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

ll f[mx+5];

inline void solution()
{
    int n;
    cin >> n;
    int sum = 0;
    f[0] = 0;
    f[1] = 1;
    f[2] = 4;
    if(n < 4)
    {
        cout << 1;
        return;
    }
    else if(n <= 9)
    {
        cout << 2;
        return;
    }
    for(int i = 3; i <= mx; i++)
    {
        f[i] = i + 2*f[i-1] - f[i-2];
        if(f[i] > n)
        {
            cout << i - 1;
            return;
        }
        else if(f[i] == n)
        {
            cout << i;
            return;
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