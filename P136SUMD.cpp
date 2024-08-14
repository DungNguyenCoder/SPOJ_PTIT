#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    ll c,k;
    cin >> c >> k;
    ll min = 1;
    for(int i = 1; i <= k; i++)
        min *= 10;
    ll t1 = (c/min)*min;
    ll t2 = t1+min;
    if(c-t1 >= t2-c)
        cout << t2;
    else
        cout << t1; 
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