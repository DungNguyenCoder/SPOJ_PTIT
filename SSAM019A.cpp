#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

void solution()
{
    ll n;
    cin >> n;
    int cnt = 0;
    if(n % 2)
    {
        cout << "0\n";
        return;
    }
    if(n % 2 == 0)
        ++cnt;
    for(int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if(i % 2 == 0)
                ++cnt;
            if((n/i) % 2 == 0)
                ++cnt;
        }
    }
    int i = sqrt(n);
    if(i * i == n && i % 2 == 0)
        ++cnt;
    cout << cnt;
    cout << "\n";
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