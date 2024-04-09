#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

bool cmp(ll a, ll b)
{
    return a > b;
}

void solution()
{
    int c, n;
    cin >> c >> n;
    ll a[n + 5];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    ll b[n + 5];
    b[0] = a[0];
    int moc;
    for(int i = 1; i < n; i++)
    {
        b[i] = a[i] + b[i - 1];
        if(b[i] >= c)
        {
            moc = i;
            break;
        }
    }
    --moc;
    ll max = b[moc];
    for(int i = moc + 2; i < n; i++)
    {
        ll sum = b[moc] + a[i];
        if(sum > max && sum <= c)
            max = sum;
    }
    cout << max;
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