#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    set<char> se;
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        se.insert(s[i]);
    }
    int k = se.size();
    if(k % 2 == 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
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