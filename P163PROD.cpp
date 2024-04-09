#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

int cnt(ll n)
{
    int dem = 0;
    while(n)
    {
        ++dem;
        n /= 10;
    }
    return dem;
}

inline void solution()
{
    string a,b;
    cin >> a >> b;
    ll A = 0, B = 0;
    ll a1 = 0, b1 = 0;
    for(int i = 0; i < a.size(); i++)
    {
        a1 = a1 * 10 + a[i] - '0';
        if(a[i] != '0')
            A = A*10 + a[i] - '0';
    }
    for(int i = 0; i < a.size(); i++)
    {
        b1 = b1 * 10 + b[i] - '0';
        if(b[i] != '0')
            B = B*10 + b[i] - '0';
    }
    ll C = A + B;
    ll c1 = a1 + b1;
    ll c2 = 0;
    string c = to_string(c1);
    for(int i = 0; i < c.size(); i++)
    {
        if(c[i] != '0')
            c2 = c2*10 + c[i] - '0';
    }
    if(C == c2)
        cout << "YES";
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