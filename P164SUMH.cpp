#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define TEST 0
int mod = 1000000007;

inline void solution()
{
    ll n;
    cin >> n;
    ll sum = 0;
    ll tmp = 0;
    for(ll i = 1;; i++)
    {
        if(sum == n)
        {
            cout << i-1;
            return;
        }
        else if(sum > n)
        {
            cout << i-2;
            return;
        }
        else
        {
            tmp += i;
            sum += tmp;
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