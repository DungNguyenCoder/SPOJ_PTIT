#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    string s;
    vector<ll> v;
    while(1)
    {
        cin >> s;
        if(s == "init")
        {
            v.clear();
        }
        else if(s == "push")
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        else if(s == "pop")
        {
            if(v.size())
                v.pop_back();
        }
        else if(s == "top")
        {
            if(v.size())
                cout << v[v.size()-1] << endl;
            else
                cout << -1 << endl;
        }   
        else if(s == "size")
        {
            cout << v.size() << endl;
        }
        else if(s == "empty")
        {
            if(v.size())
                cout << "0\n";
            else
                cout << "1\n";
        }
        else if(s == "end")
        {
            break;
        }
    }
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