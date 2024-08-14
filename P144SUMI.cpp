#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

int ucln(int a, int b)
{
    if(b == 0)  return a;
    return ucln(b,a%b);
}

int bcnn(int a, int b)
{
    return a*b/ucln(a,b);
}

inline void solution()
{
    int n,m;
    cin >> n >> m;
    int k = bcnn(m,n);
    int phan = k/m, ptb = k/n;
    int sum = 0, x = 0;
    for(int i = 1; i <= m; i++)
    {
        while(x < phan)
            x += ptb;
        if(x == phan)
            x = 0;
        else
        {
            ++sum;
            x -= phan;
        }
    }
    cout << sum;
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