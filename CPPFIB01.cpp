#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

ll f[1005];

void fibo()
{
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 1001; i++)
    {
        f[i-1] %= mod;
        f[i-2] %= mod;
        f[i] = f[i-1] + f[i-2];
        f[i] %= mod;
    }
}

inline void solution()
{
    int n;
    cin >> n;
    cout << f[n] << "\n";
}

int main()
{
    faster();
    int t;
    fibo();
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