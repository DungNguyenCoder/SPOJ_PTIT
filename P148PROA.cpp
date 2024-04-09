#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    while(1)
    {
        int n;
        cin >> n;
        if(n == 0)
            break;
        if(n == 1)
        {
            cout << "1\n";
            continue;
        }
        int cnt = 1;
        while(n != 1)
        {
            ++cnt;
            if(n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                n *= 3;
                ++n;
            }
        }
        cout << cnt << "\n";
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