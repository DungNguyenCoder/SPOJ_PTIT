#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 100000
#define mod 100000007
#define TEST 0

ll a[mx+5];
ll b[mx+5];

void solution()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = b[i-1] + a[i];
    }
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i]*(b[n-1] - b[i]);
    }
    cout << sum;
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