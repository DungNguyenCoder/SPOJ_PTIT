#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

inline void solution()
{
    string s;
    cin >> s;
    int n = s.size();
    // if(n%9)
    // {
    //     cout << 0 << "\n";
    //     return;
    // }
    if(s == "0")
    {
        cout << 0 << "\n";
        return;
    }
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += s[i] - '0';
    }
    if(sum%9)
        cout << 0 << "\n";
    else
        cout << 1 << "\n";
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