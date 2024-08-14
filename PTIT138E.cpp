#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

inline void solution()
{
    ll n;
    cin >> n;
    ll tmp = 0, dem = 1;
    while(n/10)
    {
        tmp = (tmp + n%10 >= 5);
        n /= 10;
        dem *= 10;
    }
    cout << (n+tmp)*dem << endl;
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