#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

int a[100];
int b[100];

int sinh(int n)
{
    int i = n;
    while(i >= 1 && a[i] == 1)
    {
        a[i] = 0;   
        --i;
    }
    if(i == 0)
        return 0;
    a[i] = 1;
    return 1;
}

void solution()
{
    int c,n,tong,max = 0;
    cin >> c >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    while(sinh(n))
    {
        tong = 0;
        for(int i = 1; i <= n; i++)
        {
            tong += a[i]*b[i];
            if(tong > max && tong <= c)
                max = tong;
            if(tong > c)
                break;
        }
    }
    cout << max;
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