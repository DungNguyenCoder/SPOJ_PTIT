#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    int n, k;
    cin >> n >> k;
    if(k % (n - 1) == 0)
    {
        cout << (n*k) / (n-1) - 1 << " " << (n*k) / (n-1);
    }
    else
    {
        cout << (n*k) / (n-1) << " " << (n*k) / (n-1);
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