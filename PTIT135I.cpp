#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

void solution()
{
    string s;
    cin >> s;
    int cnt = 1;
    int n = s.size();
    for(int i = 1; i < n; i++)
    {
        if(s[i - 1] == s[i])
            ++cnt;
        else
        {
            cout << cnt << s[i - 1];
            cnt = 1;
        }
    }
    if(cnt)
        cout << cnt << s[n - 1];
    cout << endl;
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