#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 1

int a[105];

void solution()
{
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        a[i] = 1;
    for(int i = 2; i <= n; i++)
    {
        for(int j = i; j <= n; j += i)
        {
            if(a[j] == 0)
                a[j] = 1;
            else if(a[j] == 1)
                a[j] = 0;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 1)
            ++cnt;
    }
    cout << cnt << "\n";
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