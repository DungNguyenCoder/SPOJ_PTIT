#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    int a[3];
    for(int i = 0; i < 3; i++)
        cin >> a[i];
    sort(a,a+3);
    if(a[1] - a[0] > a[2] - a[1])
    {
        int d = a[2] - a[1];
        int ans = a[0] + d;
        cout << ans;
    }
    else if(a[1] - a[0] < a[2] - a[1])
    {
        int d = a[1] - a[0];
        int ans = a[1] + d;
        cout << ans;
    }
    else
    {
        int d = a[1] - a[0];
        int ans = a[2] + d;
        cout << ans;
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