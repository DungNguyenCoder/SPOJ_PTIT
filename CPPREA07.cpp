#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 1

bool cmp(int a, int b)
{
    int n = 10, m = 10;
    while(a/n > 0) n *= 10;
    while(b/m > 0) m *= 10;
    return a*m+b > b*n+a;
}

inline void solution()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n,cmp);
    for(int i = 0; i < n; i++)
        cout << a[i];
    cout << "\n";
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