#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

inline void solution()
{
    ll n, h;
    cin >> n >> h;
    for(int i = 1; i < n; i++)
    {
        double ans = h * sqrt((1.0*i)/n);
        cout << setprecision(6) << fixed << ans << " ";
    }
    cout << endl;
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