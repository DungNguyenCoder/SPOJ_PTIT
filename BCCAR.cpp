#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 1

void solution()
{
    int n;
    cin >> n;
    int min = 1000;
    int max = -1;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x > max) max = x;
        if(x < min) min = x;
    }
    int ans = (max - min) * 2;
    cout << ans << "\n";
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