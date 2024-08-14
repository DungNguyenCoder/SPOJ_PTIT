#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    ll n,k;
    cin >> n >> k;
    ll tmp = n;
    int cnt2 = 0, cnt5 = 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        while(n % i == 0)
        {
            if(i == 2)
                ++cnt2;
            else if(i == 5)
                ++cnt5;
            n /= i;
        }
    }
    if(n != 1)
    {
        if(n == 2)
            ++cnt2;
        else if(n == 5)
            ++cnt5;
    }
    if(cnt2 < k)
    {
        tmp *= pow(2,k-cnt2);
    }
    if(cnt5 < k)
    {
        tmp *= pow(5,k-cnt5);
    }
    // cout << cnt2 << " " << cnt5 << endl;
    cout << tmp;
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