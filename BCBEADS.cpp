#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

void solution()
{
    int n;
    cin >> n;
    int a[n + 5];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 1; i < n; i++)
    {
        if((a[i] == 1 && a[i-1] == 0) || (a[i] == 0 && a[i-1] == 1))
            ++cnt;
    }
    cout << cnt;
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