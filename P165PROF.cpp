#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

int a[mx+5];
int b[mx+5];

inline void solution()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i-1] <= a[i])
        {
            b[i] = a[i] 
        }
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