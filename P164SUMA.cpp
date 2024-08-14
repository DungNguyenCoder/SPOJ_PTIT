#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define TEST 0
int mod = 1000000007;

inline void solution()
{
    int n;
    cin >> n;
    string a[n];
    string x,y;
    int check = 1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(check)
        {
            x = a[i];
            check = 0;
        }
        if(a[i] != x)
        {
            y = a[i];
        }
    }
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
            ++cnt1;
        else if(a[i] == y)
            ++cnt2;
    }
    if(cnt1 < cnt2)
        cout << y;
    else
        cout << x;
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