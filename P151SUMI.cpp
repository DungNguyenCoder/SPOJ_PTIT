#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    vector<string> v;
    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }
    map<string,int> mp;
    for(int i = 0; i < n; i++)
    {
        ++mp[v[i]];
    }
    int max = -1;
    string ans;
    for(auto x : mp)
    {
        if(x.second > max)
        {
            max = x.second;
            ans = x.first;
        }
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