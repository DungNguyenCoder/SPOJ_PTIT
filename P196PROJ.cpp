#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define TEST 0
int mod = 1000000007;

inline void solution()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0, ans1 = 0, ans2 = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        if(sum < 0)
            sum = 0;
        ans1 = max(ans1,sum);
    }
    sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        if(sum > 0)
            sum = 0;
        ans2 = min(ans2,sum);
    }
    if(abs(ans2) > ans1)
        cout << abs(ans2);
    else
        cout << ans1;
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