#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

struct toado
{
    int x;
    int y;
};

void input(toado &a)
{
    cin >> a.x >> a.y;
}

void solution()
{
    toado a,b,c;
    toado d;
    input(a);
    input(b);
    input(c);
    if(a.x == b.x)
        d.x = c.x;
    if(b.x == c.x)
        d.x = a.x;
    if(c.x == a.x)
        d.x = b.x;

    if(a.y == b.y)
        d.y = c.y;
    if(b.y == c.y)
        d.y = a.y;
    if(c.y == a.y)
        d.y = b.y;
    cout << d.x << " " << d.y;
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