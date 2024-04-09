#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll res = 1;
        for (int i = 2; i <= sqrt(n); i++)
        {
            int cnt = 0;
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    ++cnt;
                    n /= i;
                }
                if (cnt == 1) res *= i - 1;
                else res *= 1ll * pow(i,cnt) - pow(i,cnt - 1);
            }
        }
        if (n != 1) res *= n - 1;
        if(nt(res))
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
}