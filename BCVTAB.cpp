#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

void solution()
{
    ll a,b;
    cin >> a >> b;
    cout << a + b;
}

int main()
{
    faster();
    int t;
    if(TEST)    cin >> t;
    else        t = 1;
    while(t--)
    {
        solution();
    }
}