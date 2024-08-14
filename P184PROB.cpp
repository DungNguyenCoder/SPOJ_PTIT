#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    ll a[n+5];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    if(n%2 == 1)
        cout << a[(n-1)/2];
    else
    {
        int k = n/2;
        ll s1 = 0, s2 = 0;
        for(int i = 0; i < n; i++)
            s1 += abs(a[k-1]-a[i]);
        for(int i = 0; i < n; i++)
            s2 += abs(a[k] - a[i]);
        if(s1 <= s2)
            cout << a[k-1];
        else
            cout << a[k];
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