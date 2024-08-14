#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    int s,n;
    cin >> n >> s;
    int a[n+5];
    int cnt = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n,greater<int>());
    for(int i = 0; i < n; i++)
    {
        int tmp = s/a[i];
        s -= a[i]*tmp;
        cnt += tmp;
    }
    cout << cnt;
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