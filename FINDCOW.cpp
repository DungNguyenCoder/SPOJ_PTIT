#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0
// )((()())())
// 01234567890
void solution()
{
    string s;
    cin >> s;
    int n = s.size();
    int x = 0, y = 0;
    vector<int> a;
    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] == '(' && s[i + 1] == '(')
        {
            a.push_back(1);
        }
        if(s[i] == ')' && s[i + 1] == ')')
        {
            a.push_back(2);
        }
    }
    int k = a.size();
    int ans = 0;
    for(int i = 0; i < k; i++)
    {
        if(a[i] == 1)
        {
            for(int j = i + 1; j < k; j++)
            {
                if(a[j] == 2)
                    ++ans;
            }
        }
    }
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