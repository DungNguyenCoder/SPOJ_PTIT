#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    double ans = (1.0*sum) / (n);
    cout << setprecision(12) << fixed << ans;
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