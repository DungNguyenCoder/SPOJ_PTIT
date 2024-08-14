#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
#define mod 1000000007
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    int s = 1;
    for(int i = 2;i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            int k = 0;
            while(n % i == 0)
            {
                ++k;
                n /= i;
            }
            s *= 2*k+1;
        }
    }
    if(n != 1)
        s *= 3;
    cout << s;
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