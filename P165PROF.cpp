#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 200000
#define TEST 0

int a[mx+5];
int b[mx+5];

inline void solution()
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]] = 1;
    }
    for(int i = mx; i > ans; i--)
    {
        if(b[i])
        {
            for(int j = i-ans-1; j > ans; j--)
            {
                if(b[j])
                {
                    if(i%j > ans)
                        ans = i%j;
                }
            }
        }
    }
    cout << ans;
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