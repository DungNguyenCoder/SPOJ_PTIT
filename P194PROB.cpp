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
    int a[n+5];
    int MIN = 200;
    int MAX = -1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        MAX = max(MAX,a[i]);
        MIN = min(MIN,a[i]);
    }
    int cao;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == MAX)
        {
            cao = i;
            break;
        }
    }
    int thap;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == MIN)
        {
            thap = i;
        }
    }
    int ans;
    if(cao > thap)
    {
        ans = cao + (n - 2 - thap);
    }
    else
    {
        ans = cao + (n - 1 - thap);
    }
    cout << ans;
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