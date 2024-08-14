#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    ll x;
    cin >> x;
    int cnt = 0;
    while(x > 0)
    {
        ++cnt;
        ll tmp = 1;
        while(1)
        {
            if(2*tmp > x)
                break;
            tmp *= 2;  
        }
        x -= tmp;
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