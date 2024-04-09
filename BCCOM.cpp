#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 1

void solution()
{
    int n;
    cin >> n;
    int tong = 0;
    while(n >= 10)
    {
        tong = 0;
        while(n > 0)
        {
            tong += n % 10;
            n /= 10;
        }
        n = tong;
    }
    cout << tong << "\n";
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