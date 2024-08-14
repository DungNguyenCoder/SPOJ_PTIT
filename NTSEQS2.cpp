#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector<bool> dp(s+1, false);
    dp[0] = true;
    for(int i = 0; i < n; i++)
    {
        for(int j = s; j >= a[i]; j--)
        {
            if(dp[j-a[i]] == true)
            {
                dp[j] = true;
            }
        }
    }
    if(dp[s] == true)
        cout << "YES";
    else
        cout << "NO";
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