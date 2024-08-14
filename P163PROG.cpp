#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    ll n,x;
    cin >> n >> x;
    ll cnt = 0;
    for(int i = 1; i <= sqrt(x); i++)
    {
        if(x%i == 0 && i*i != x)
        {
            if(i <= n && (x/i) <= n)
            {
                cnt += 2;
                // cout << "ha";
            }
        }
        if(x%i == 0 && i*i == x)
        {
            // cout << "haha";
            if(i <= n && (x/i) <= n)
                ++cnt;
        }
    }
    cout << cnt;
}

int main()
{
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}