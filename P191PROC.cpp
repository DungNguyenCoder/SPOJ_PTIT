#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 1

inline void solution()
{
    string s;
    getline(cin,s);
    int n = s.size();
    vector<int> v;
    for(int i = 0; i < n; i++)
        if(s[i] == ' ')
            v.push_back(i);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            s.erase(i,1);
        }
    }
    s.push_back(tolower(s[0]));
    s.erase(s.begin());
    s = s + "ee";
    s[0] = toupper(s[0]);
    int j = 1;
    for(int i = 0; i < v.size(); i++)
        s.insert(v[i],1,' ');
    cout << s << "\n";
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