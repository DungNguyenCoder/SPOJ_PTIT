#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define mod 1000000007
#define TEST 1

inline void solution()
{
    int n;
    cin >> n;
    int a[n];
    int chan = 0, le = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]%2)
            ++le;
        else
            ++chan;
    }
    if((n%2 == 0 && le == n) || (chan == n))
        cout << "NO\n";
    else
        cout << "YES\n";
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