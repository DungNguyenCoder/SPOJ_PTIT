#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

bool nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

void solution()
{
    int n;
    cin >> n;
    if(nt(n))   cout << "YES";
    else    cout << "NO";
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