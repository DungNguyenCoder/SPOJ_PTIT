#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    string s;
    cin >> s;
    int n = s.size();
    sort(s.begin(),s.end());
    ll l = 0, r = 0, a = 0;
    for(int i = 0; i < n; i++)
    {
        char x = s[i];
        if(x == 'L')    ++l;
        else if(x == 'R')   ++r;
        else    ++a;
    }
    ll ans = 0;
    ans = abs(l-r) + a;
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