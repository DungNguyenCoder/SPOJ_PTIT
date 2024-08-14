#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if(n == 1)
    {
        cout << "1 0";
        return;
    }
    int dau = 1, cuoi = n;
    int cntdau = 1, cntcuoi = 1;
    int andau = a[dau];
    int ancuoi = a[cuoi];
    while((cntdau + cntcuoi) != n)
    {
        // cout << andau << " " << ancuoi << endl;
        if(andau < ancuoi)
        {
            ++dau;
            andau += a[dau];
            ++cntdau;
        }
        else if(andau > ancuoi)
        {
            --cuoi;
            ancuoi += a[cuoi];
            ++cntcuoi;
        }
        else if(andau == ancuoi && cntdau + cntcuoi != n - 1)
        {
            ++dau;
            --cuoi;
            ancuoi += a[cuoi];
            andau += a[dau];
            ++cntdau;
            ++cntcuoi;
        }
        else if(andau == ancuoi && cntdau + cntcuoi == n - 1)
        {
            ++cntdau;
        }
    }
    cout << cntdau << " " << cntcuoi;
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