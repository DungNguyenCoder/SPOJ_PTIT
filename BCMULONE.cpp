#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

string chia(string s, int n)
{
    string ans = "";
    int tmp = 0, i = 0;
    while(tmp < n && i < s.size())
        tmp = tmp * 10 + (s[i++] - '0');
    while(1)
    {
        ans += (tmp/n + '0');
        if(i == s.size())
            break;
        tmp = (tmp % n) * 10 + s[i++] - '0';
    }
    return ans;
}

inline void solution()
{
    string s = "";
    int n;
    cin >> n;
    for(int i = 0; i < n-1; i++)
        s += '9';
    s += '8';
    for(int i = 0; i < n-1; i++)
        s += '0';
    s += '1';
    cout << chia(s,81) << endl;
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