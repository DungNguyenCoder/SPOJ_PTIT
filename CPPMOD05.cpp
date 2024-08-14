#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

ll find(string n, ll m)
{
    ll res = 0;
    for(int i = 0; i < n.size(); i++)
    {
        res = (res * 10) + n[i] - '0';
        res %= m;
    }
    return res;
}

inline void solution()
{
    string n;
    ll m;
    cin >> n >> m;
    cin.ignore();
    cout << find(n,m) << "\n";
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