#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

pair<ll,ll> a[10005];

bool cmp(pair<ll,ll> a, pair<ll,ll> b)
{
    return a.first < b.first;
}

inline void solution()
{
    int s,n;
    cin >> s >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    int check = 0;
    ll sum = s;
    sort(a+1,a+1+n,cmp);
    for(int i = 1; i <= n; i++)
    {
        if(sum > a[i].first)
        {
            sum += a[i].second;
        }
        else
        {
            check = 1;
            break;
        }
    }
    if(check)
        cout << "NO";
    else
        cout << "YES";
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