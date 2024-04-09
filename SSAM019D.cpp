#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

int check(int n)
{
    while(n)
    {
        int a = n % 10;
        if(a != 0 && a != 9)
            return 0;
        n /= 10;
    }
    return 1;
}

inline void solution()
{
    int n;
    cin >> n;
    int i = n;
    while(1)
    {
        if(check(i))
        {
            cout << i << "\n";
            break;
        }
        else
            i += n;
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