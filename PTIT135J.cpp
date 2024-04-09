#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 1

void solution()
{
    double n,l,m;
    cin >> n >> l >> m;
    double a = 1 + l/100;
    double b = m / n;
    int x = 1;
    while(1)
    {
        if(pow(a,x) >= b)
        {
            break;
        }
        ++x;
    }
    cout << x << "\n";
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