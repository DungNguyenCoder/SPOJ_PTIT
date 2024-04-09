#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    int bay = n / 5;
    int bon = n % 5;
    if(n < 3 || (n > 3 && n < 5) || (n == 6 || n == 7))
    {
        cout << "-1";
        return;
    }
    while(1)
    {
        if(bon % 3 == 0)
        {
            break;
        }
        else
        {
            --bay;
            bon += 5;
        }
        if(bay == 0 && bon % 3 != 0)
        {
            cout << "-1";
            return;
        }
    }
    bon /= 3;
    cout << bon + bay;
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