#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

ll ucln (ll a, ll b)
{
    if (a == 0 || b == 0) return a + b;
    while (b != 0)
    {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}


void solution()
{
    ll n,m;
    cin >> n >> m;
    ll a = (n*(n+1))/2;
    if((a+m) % 2 != 0)
    {
        cout << "No\n";
        return;
    }
    if(a < m)
    {
        cout << "No\n";
        return;
    }
    ll b = abs(a - m) / 2;
    a -= b;
    // cout << a << " " << b << endl;
    if(ucln(a,b) == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
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