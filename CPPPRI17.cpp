#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000005
#define mod 1000000007
#define TEST 1

ll nt[mx+5];
ll snt[mx+5];
int x = 0;

void sang()
{
    nt[0] = 1;
    nt[1] = 1;
    for(int i = 2; i*i <= mx; i++)
    {
        if(nt[i] == 0)
            for(int j = i*i; j <= mx; j += i)
                nt[j] = 1;
    }
    int cnt = 0;
    for(int i = 1; i <= mx; i++)
    {
        if(!nt[i])
            ++cnt;  
        snt[i] = cnt;
    }
}

inline void solution()
{
    ll l,r;
    cin >> l >> r;
    ll a = sqrt(l);
    ll b = sqrt(r);
    ll res = snt[b] - snt[a];
    cout << res << "\n";
    // for(int i = 0; i <= 20; i++)
    //     if(!nt[i])
    //         cout << i << endl;
}

int main()
{
    faster();
    int t;
    sang();
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