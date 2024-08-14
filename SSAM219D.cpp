#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define mod 1000000007
#define TEST 1

ll a[5005];

int check(ll a[], int n)
{
    for(int i = n-1; i >= 2; i--)
    {
        int l = 0, r = i-1;
        while(l < r)
        {
            if(a[l] + a[r] == a[i])
                return 1;
            else if(a[l] + a[r] > a[i])
                --r;
            else if(a[l] + a[r] < a[i])
                ++l;
        }
    }
    return 0;
}

inline void solution()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] *= a[i];
    }
    sort(a,a+n);
    if(check(a,n))
        cout << "YES\n";
    else
        cout << "NO\n";
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