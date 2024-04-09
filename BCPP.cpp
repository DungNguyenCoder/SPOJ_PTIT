#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

ll a[mx + 5];

void uoc()
{
    a[0] = 0;
    for(int i = 1; i <= mx; i++)
    {
        a[i] -= i;
        for(int j = i; j <= mx; j += i)
        {
            a[j] += i;
        }
    }
}

inline void solution()
{
    int l,r;
    cin >> l >> r;
    int cnt = 0;
    for(int i = l; i <= r; i++)
    {
        if(a[i] > i)
            ++cnt;
    }
    cout << cnt;
    // for(int i = 1; i < 50; i++)
    //     cout << a[i] << " ";
}

int main()
{
    faster();
    int t;
    uoc();
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