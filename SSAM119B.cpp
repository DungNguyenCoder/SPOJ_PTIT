#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

inline void solution()
{
    int n,k;
    cin >> n >> k;
    int m = 4*n-1;
    int a[m];
    int cnt = 2;
    for(int i = 0; i < m; i++)
    {
        if(i % 2 == 0)
            a[i] = 1;
        else if(i < 2*n)
        {
            a[i] = cnt;
            ++cnt;
        }
        else if(i == m)
            a[i] = n;
        else
        {
            a[i] = cnt;
            --cnt;
        }
    }
    for(int i = 0; i < m; i++)
        cout << a[i] << " ";
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