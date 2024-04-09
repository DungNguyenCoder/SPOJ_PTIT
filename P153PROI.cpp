#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

inline void solution()
{
    string s;
    getline(cin,s);
    int n = s.size();
    string res = "";
    int cnt[256] = {0};
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] != ' ')
        {
            char x = s[i];
            if(isupper(x))
                x = tolower(x);
            if(cnt[x] == 0)
            {
                res.push_back(x);
            }
            else
            {
            }
            ++cnt[x];
        }
    }
    for(int i = 0; i < 256; i++)
    {
        if(cnt[i] > 1)
            sum += cnt[i];
    }
    cout << sum << " " << res << "\n";
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