#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

int ucln(int a, int b)
{
    if(a == 0 || b == 0)
        return a + b;
    while(b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int bcnn(int a, int b)
{
    return a*b/ucln(a,b);
}

inline void solution()
{
    int n;
    cin >> n;
    int a[n];
    int b[n+1];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    b[0] = a[0];
    b[n] = a[n-1];
    for(int i = 1; i < n; i++)
    {
        b[i] = bcnn(a[i-1],a[i]);
    }
    for(int i = 0; i <= n; i++)
        cout << b[i] << " ";
    cout << endl;
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