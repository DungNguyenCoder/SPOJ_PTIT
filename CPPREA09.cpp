#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

inline void solution()
{
    int n;
    cin >> n;
    ll a[n + 5];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll b[n+5];
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            b[i] = a[i] * a[i + 1];
        }
        else if(i == n - 1)
        {
            b[i] = a[i] * a[i - 1];
        }
        else
        {
            b[i] = a[i-1] * a[i+1];
        }
    }
    for(int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << "\n";
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