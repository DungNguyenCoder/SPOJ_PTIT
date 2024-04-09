#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b + c)
    {
        cout << a << "=" << b << "+" << c;
    }
    else if(a == b - c)
    {
        cout << a << "=" << b << "-" << c;
    }
    else if(b % c == 0 && a == b/c)
    {
        cout << a << "=" << b << "/" << c;
    }
    else if(a == b * c)
    {
        cout << a << "=" << b << "*" << c;
    }
    else if(a + b == c)
    {
        cout << a << "+" << b << "=" << c;
    }
    else if(a - b == c)
    {
        cout << a << "-" << b << "=" << c;
    }
    else if(a * b == c)
    {
        cout << a << "*" << b << "=" << c;
    }
    else if(a & b == 0 && a/b == c)
    {
        cout << a << "/" << b << "=" << c;
    }
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