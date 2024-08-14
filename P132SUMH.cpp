#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int a,b,c,d;
    int n,m,p;
    cin >> a >> b >> c >> d >> n >> m >> p;

    int x1 = n%(a+b);
    int x2 = n%(c+d);
    if(x1 == 0) x1 = a+b;
    if(x2 == 0) x2 = c+d;
    if(x1 <= a && x2 <= c)
        cout << "both\n";
    else if(x1 > a && x2 > c)
        cout << "none\n";
    else
        cout << "one\n";

    int y1 = m%(a+b);
    int y2 = m%(c+d);
    if(y1 == 0) y1 = a+b;
    if(y2 == 0) y2 = c+d;
    if(y1 <= a && y2 <= c)
        cout << "both\n";
    else if(y1 > a && y2 > c)
        cout << "none\n";
    else
        cout << "one\n";

    int z1 = p%(a+b);
    int z2 = p%(c+d);
    if(z1 == 0) z1 = a+b;
    if(z2 == 0) z2 = c+d;
    if(z1 <= a && z2 <= c)
        cout << "both\n";
    else if(z1 > a && z2 > c)
        cout << "none\n";
    else
        cout << "one\n";
        
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