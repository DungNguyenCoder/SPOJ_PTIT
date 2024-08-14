#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    if(n == 0)
    {
        cout << 0;
        return;
    }
    sort(a,a+n);
    int cnt = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] - a[i-1] > k)
            ++cnt;
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