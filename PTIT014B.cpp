#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 1

struct toado
{
    ll x;
    ll y;
};

void solution()
{   
    toado a,b,c,d;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
    if ((d.y >= a.y && d.y <= b.y && c.x <= b.x && d.x >= a.x) || (d.y > b.y && c.y <= b.y && c.x <= b.x && d.x >= a.x))
        cout << 1;
    else
        cout << 0;
    cout << "\n";
}

int main()
{
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}