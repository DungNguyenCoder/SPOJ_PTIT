#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

int chuyendoi(string n)
{
    int ans;
    n[0] -= '0';
    n[1] -= '0';
    n[2] -= '0';
    ans = n[2] + n[1]*2 + n[0]*4;
    return ans;
}

void solution()
{
    string s;
    cin >> s;
    int n = s.size();
    if(n % 3 == 1)
    {
        s.insert(0,"00");
    }
    else if(n % 3 == 2)
    {
        s.insert(0,"0");
    }
    n = s.size();
    string c;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        c.push_back(s[i]);
        if(c.size() == 3)
        {
            int x = chuyendoi(c);
            c.clear();
            v.push_back(x);
        }
    }
    for(auto x : v)
        cout << x;
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