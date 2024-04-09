#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

string s;

inline void solution()
{
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        if(!(s[i] == '1' || s[i] == '4'))
        {
            cout << "NO";
            return;
        }
        if(s[i] == '4' && s[i-1] != '1' && s[i-2] != '1')
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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