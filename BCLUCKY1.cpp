#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

void solution()
{
    ll n;
    cin >> n;
    int check = 0;
    while(n)
    {
        ll a = n % 10;
        if(a != 4 && a != 7)
        {
            check = 1;
            break;
        }
    }
    if(check)
        cout << "NO\n";
    else
        cout << "YES\n";
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