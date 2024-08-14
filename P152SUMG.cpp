#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 0

int nt(int n)
{
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}

inline void solution()
{
    int x,y;
    cin >> x >> y;
    int res;
    for(int i = x+1;; i++)
    {
        if(nt(i))
        {
            res = i;
            break;
        }
    }
    if(y == res)
        cout << "YES";
    else
        cout << "NO";
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