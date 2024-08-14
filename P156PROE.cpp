#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

inline void solution()
{
    while(1)
    {
        int k;
        cin >> k;
        if(k == 0)
            break;
        string s;
        cin >> s;
        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            // cout << s.find(s[i]);
            s[i] = a[a.find(s[i])+k];
        }
        reverse(s.begin(),s.end());
        cout << s << "\n";
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