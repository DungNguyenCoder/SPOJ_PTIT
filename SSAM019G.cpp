#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 1

inline void solution()
{
    ll n,k;
    cin >> n >> k;
    ll a[n+5];
    a[1] = 1;
    a[2] = 1;
    for(int i = 3; i <= n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    while(1)
    {
        if(n == 1)
        {
            cout << "A\n";
            break;
        }
        else if(n == 2)
        {
            cout << "B\n";
            break;
        }
        else if(k > a[n-2])
        {
            k -= a[n-2];
            n--;
        }
        else
            n -= 2;
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