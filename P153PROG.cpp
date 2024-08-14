#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    ll k,n;
    cin >> n >> k;
    ll moc = ceil((1.0*n)/2);
    ll res;
    if(k <= moc)
    {
        res = 2*k - 1;
    }
    else
    {
        k -= moc;
        res = 2*k;
    }
    cout << res;
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