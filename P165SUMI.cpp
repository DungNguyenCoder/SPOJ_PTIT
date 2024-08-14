#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
// #define endl "\n"
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    ll n;
    cin >> n;
    ll sum;
    if(n%2 == 0)
        sum = n/2;
    else
        sum = n/2 - n;
    cout << sum << endl;
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