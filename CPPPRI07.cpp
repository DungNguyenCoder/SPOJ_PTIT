#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

int sphenic(int n)
{
    int res = 0;
    for(int i = 2;i <= sqrt(n); i++)
    {
        int cnt = 0;
        while(n % i == 0)
        {
            ++cnt;
            n/= i;
        }
        if(cnt >= 2)    return 0;
        if(cnt == 1)    ++res;
    }
    if(n != 1)
        ++res;
    return res == 3;
}

inline void solution()
{
    int n;
    cin >> n;
    cout << sphenic(n) << "\n";
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