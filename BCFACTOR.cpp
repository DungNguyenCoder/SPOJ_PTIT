#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

void solution()
{
    int n;
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while(n % i == 0)
        {
            ++cnt;
            n /= i;
        }
        cout << i << " " << cnt;
        if(n != 1)
            cout << "\n";
    }
    if(n != 1)
        cout << n << " 1" << "\n";
}

int main()
{
    faster();
    int t;
    if(TEST)    cin >> t;
    else        t = 1;
    while(t--)
    {
        solution();
    }
}