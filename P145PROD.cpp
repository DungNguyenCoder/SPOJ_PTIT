#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    ll r;
    cin >> r;
    double s1 = r*r*3.14159265358979;
    double s2 = r*r*2.0;
    cout << setprecision(6) << fixed << s1 << "\n";
    cout << setprecision(6) << fixed << s2;
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