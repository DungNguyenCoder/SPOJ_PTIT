#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

int cd(string s)
{
    int res = (s[0] - '0')*2*2 + (s[1] - '0')*2 + (s[2] - '0')*pow(2,0);
    return res;
}

inline void solution()
{
    string s;
    cin >> s;
    if(s.size() % 3 == 1)
    {
        s.insert(0,"0");
        s.insert(0,"0");
    }
    else if(s.size() % 3 == 2)
    {
        s.insert(0,"0");
    }
    // cout << s << endl;
    int n = s.size();
    vector<int> v;
    for(int i = 0; i < n - 2; i += 3)
    {
        string x;
        x.push_back(s[i]);
        x.push_back(s[i+1]);
        x.push_back(s[i+2]);
        // cout << x << endl;
        int a = cd(x);
        // cout << a << endl;
        v.push_back(a);
    }
    for(int i = 0; i < v.size(); i++)
        cout << v[i];
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