#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    string x = s;
    sort(x.begin(),x.end());
    int idx = 0;
    string ans = "";
    for(int i = 0; i < n; i++)
    {
        if(s[i] == x[idx] && idx < k)
        {
            ++idx;
        }
        else
            ans.push_back(s[i]);
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