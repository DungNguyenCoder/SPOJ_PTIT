#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    ll a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    if(a > b)   swap(a,b);
    if(c > d)   swap(c,d);
    if(e > f)   swap(e,f);
    if(a + c + e == b && b == d && d == f)
        cout << b;
    else if(a + c == f && b == d && d + e == f)
        cout << f;
    else if(e + c == b && d == f && a + d == b)
        cout << b ;
    else if(a + e == d && b == f && b + c == d)
        cout << d;
    else if(b + d == f && a == c && a + e == f)
        cout << f;
    else if(d + f == b && e == c && a + e == b)
        cout << b;
    else if(b + f == d && a == e && a + c == d)
        cout << d;
    else
        cout << "0";
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