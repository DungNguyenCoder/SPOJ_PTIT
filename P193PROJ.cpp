#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    ll a[3];
    ll b[4];
    cin >> a[1] >> a[2] >> b[1] >> b[2] >> b[3];
    sort(b+1,b+4);
    if(b[1]*b[1] + b[2]*b[2] != b[3]*b[3])
    {
        cout << "NO";
        return;
    }
    if(a[1]*a[1] + a[2]*a[2] >= b[3]*b[3])
    {
        cout << "YES";
    }
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