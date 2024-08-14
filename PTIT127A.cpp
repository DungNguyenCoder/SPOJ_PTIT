#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    int m,n,k;
    cin >> m >> n >> k;
    int ans = min(m/2,n);
    if((m - ans *2 + n - ans) >= k)
        cout << ans;
    else
    {
        while(ans != 0 && (m - ans*2 + n -ans) < k)
        {
            --ans;
        }
        cout << ans;
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