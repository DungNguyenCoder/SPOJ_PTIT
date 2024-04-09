#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

ll gt(int n)
{
    ll res = 1;
    for(int i = 2; i <= n; i++)
    {
        res *= i*1ll;
    }
    return res;
}

void solution()
{
    while(1)
    {
        int n;
        cin >> n;
        if(n == 0)
            break;
        cout << gt(n) << "\n";
    }
}

int main()
{
    faster();
    int t;
    if(TEST)    cin >> t;
    else        t = 1;
    while(t--)
    {
        solution();
    }
}