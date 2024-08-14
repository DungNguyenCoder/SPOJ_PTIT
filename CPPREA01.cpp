#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 10000000
#define mod 1000000007
#define TEST 1

inline void solution()
{
    int n;
    cin >> n;
    ll a[n];
    ll b[n+5];
    for(int i = 0; i <= n; i++)
        b[i] = 0;
    for(int i = 0; i < n;i++)
    {
        cin >> a[i];
        if(a[i] >= 0 && a[i] <= n)
            b[a[i]] = 1;
    }
    for(int i = 0; i < n; i++)
    {
        if(b[i] == 1)
            cout << i << " ";
        else
            cout << "-1 ";
    }
    cout << "\n";
}

// A[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1} -> 1,2,3,4,6,9
// A[] = {-1, 1, 2, 3, 4, -1, 6, -1, -1, 9}.

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