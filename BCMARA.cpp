#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

struct Time
{
    int h;
    int m;
    int s;
    int t;
};

Time a[10000];

bool cmp(Time a, Time b)
{
    return a.t < b.t;
}

void solution()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].h;
        cin >> a[i].m;
        cin >> a[i].s;
        a[i].t = a[i].h * 3600 + a[i].m * 60 + a[i].s;
    }
    sort(a,a+n,cmp);
    for(int i = 0; i < n; i++)
    {
        cout << a[i].h << " " << a[i].m << " " << a[i].s << "\n";
    }
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