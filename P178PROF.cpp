#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define TEST 0
int mod = 1000000007;

inline void solution()
{
    while(1)
    {
        int n;
        cin >> n;
        if(n == 0)
            break;
        else if(n == 1)
            cout << 1;
        else
        {
            int cnt = 1;
            while(n != 1)
            {
                if(n%2 == 0)
                {
                    ++cnt;
                    n /= 2;
                }
                else
                {
                    ++cnt;
                    n = 3*n+1;
                }
            }
            cout << cnt;
        }
        cout << "\n";
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