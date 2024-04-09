#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 500000
#define TEST 0

ll prime[mx + 5];

void sieve()
{
    for(int i = 2; i * i <= mx; i++)
    {
        if(!prime[i])
        {
            for(int j = i * i; j <= mx; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}

void solution()
{
    while(1)
    {
        int n;
        cin >> n;
        if(n == 0)
            break;
        int cnt = 0;
        for(int i = n + 1; i <= 2*n; i++)
        {
            if(!prime[i])
                ++cnt;
        }
        cout << cnt << "\n";
    }
}

int main()
{
    faster();
    int t;
    sieve();
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