#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1 

inline void solution()
{
    int n,m,a,b;
    cin >> m >> n >> a >> b;
    int cnt = 0;
    for(int i = m; i <= n; i++)
    {
        if(i % a == 0 || i % b == 0)
        {
            ++cnt;
        }
    }
    cout << cnt << "\n";
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