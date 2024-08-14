#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 1
int T = 1;

void solution()
{
    int n;
    cin >> n;
    ll a[n];
    ll b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
        cin >> b[i];
    sort(a,a+n);
    sort(b,b+n,greater<ll>());
    ll sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i]*b[i];
    cout << "Case #" << T << ": " << sum << "\n";
    ++T;
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