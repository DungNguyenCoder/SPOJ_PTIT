#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

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

ll bcnn (ll a, ll b)
{
    if (a == 0 || b == 0) return 0;
    ll res = (1.0 * a / ucln(a,b)) * b;
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a;
        ll b;
        cin >> a >> b;
        cout << bcnn(a,b) << " " << ucln(a,b);
        cout << "\n";
    }
}
