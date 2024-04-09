#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

int nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}

void solution()
{
    int l,r;
    cin >> l >> r;
    for(int i = l; i <= r; i++)
    {
        if(nt(i))
            cout << i << " ";
    }
    cout << "\n";
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