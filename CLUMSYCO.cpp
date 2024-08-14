#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0, s1 = 0, s2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '(')
            ++s1;
        else
            ++s2;
        if(s2 > s1)
        {
            ++ans;
            ++s1;
            --s2;
        }
    }
    ans += abs(s1-s2)/2;
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