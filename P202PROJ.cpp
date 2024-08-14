#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    string x;
    cin >> x;
    int n = x.size();
    ll ans = 0, tmp = 0;
    for(int i = 0; i < n; i++)
    {
        if(x[i] == '1')
            ++tmp;
        else if(x[i] == '2')
            ans += tmp;
    }
    cout << ans;
}

//2017201820192020
//21212122
//11223345

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