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
    int bay = n / 7;
    int bon = n % 7;
    if(n < 4 || (n > 4 && n < 7) || (n == 8 || n == 9))
    {
        cout << "-1";
        return;
    }
    while(1)
    {
        if(bon % 4 == 0)
        {
            break;
        }
        else
        {
            --bay;
            bon += 7;
        }
        if(bay == 0 && bon % 4 != 0)
        {
            cout << "-1";
            return;
        }
    }
    bon /= 4;
    for(int i = 1; i <= bon; i++)
        cout << 4;
    for(int i = 1; i <= bay; i++)
        cout << 7;
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