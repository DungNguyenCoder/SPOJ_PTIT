#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 10000
#define TEST 1

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
    int j = 0;
    for(int i = 0; i < n; i += 2)
        b[i] = a[j++];
    for(int i = 1; i < n; i += 2)
        b[i] = a[j++];
    for(int i = 0; i < j; i++)
        cout << b[i] << " ";
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