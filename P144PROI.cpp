#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

struct kc
{
    int x,y;
};

void solution()
{
    int n;
    cin >> n;
    int a[n], b[n];
    kc c[n];
    for(int i = 0; i < n; i++)
    {
        cin >> c[i].x >> c[i].y;
        a[i] = c[i].x;
        b[i] = c[i].y;
    }
    sort(a,a+n);
    sort(b,b+n);
    int dau = a[0];
    int cuoi = b[n-1];
    for(int i = 0; i < n; i++)
    {
        if(c[i].x == dau && c[i].y == cuoi)
        {
            cout << i+1;
            return;
        } 
    }
    cout << -1;
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