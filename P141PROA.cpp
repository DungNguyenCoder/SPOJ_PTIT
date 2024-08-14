#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    int k,n;
    cin >> k >> n;
    vector<pair<int,char>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    int dl = 210;
    int t = 0;
    int ans = k;
    for(int i = 0; i < n; i++)
    {
        t += v[i].first;
        if(v[i].second == 'T' && t <= dl)
        {
            ++ans;
        }
        if(ans == 9)
        {
            ans = 1;
        }
        // cout << t << " " << ans << endl;
        if(t > dl)
        {
            // cout << 1;
            cout << ans;
            break;
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