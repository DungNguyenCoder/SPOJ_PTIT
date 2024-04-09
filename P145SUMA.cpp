#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;
    int check = 0;
    for(int i = 0; i < n/2; i++)
    {
        if(s[i] != '4' && s[i] != '7')
        {
            check = 1;
            break;
        }
        cnt1 += (s[i] - '0');
    }
    if(check)
    {
        cout << "NO";
        return;
    }
    for(int i = n/2; i < n; i++)
    {
        if(s[i] != '4' && s[i] != '7')
        {
            check = 1;
            break;
        }
        cnt2 += (s[i] - '0');
    }
    if(check)
    {
        cout << "NO";
        return;
    }
    // cout << cnt1 << " " << cnt2 << endl;
    if(cnt1 == cnt2)
        cout << "YES";
    else
        cout << "NO";
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