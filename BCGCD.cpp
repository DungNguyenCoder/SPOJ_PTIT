#include <iostream>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

int ucln (ll a, ll b)
{
    if(a == 0 || b == 0)    return a + b;
    while(b)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll bcnn(ll a, ll b)
{
    return 1ll * a * b / ucln(a,b);
}

void solution()
{
    while(1)
    {
        ll a,b;
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        cout << ucln(a,b) << " " << bcnn(a,b) << "\n";
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