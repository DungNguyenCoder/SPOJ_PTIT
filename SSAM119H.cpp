#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

inline void solution()
{
    string s;
    cin >> s;
    int n = s.size();
    if(n == 1)
    {
        s = "0" + s;
    }
    n = s.size();
    // cout << s << endl;
    int ans = 0;
    // cout << s[n-2] << " " << s[n-1] << endl;
    ans = (s[n-2]-'0')*10+(s[n-1]-'0');
    // cout << ans << endl;
    if(ans % 4 == 0)
        cout << 4 << "\n";
    else
        cout << 0 << "\n";
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