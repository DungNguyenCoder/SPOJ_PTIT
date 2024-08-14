#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;
const int mx = 1e5;

bool TEST = 0;

void solution()
{
    int n;
    cin >> n;
    set<long long> check;
    ll x; 
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        check.insert(x);
    }
    if(check.size() > 3)
    {
        cout << "NO";
    }
    else if(check.size() < 3)
    {
        cout << "YES";
    }
    else
    {
        vector<long long> b;
        for(ll x : check)
        {
            b.push_back(x);
        }
        if(((b[2] + b[0])) != b[1] * 2)
        {
            cout << "NO";
        }
        else
            cout << "YES";
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