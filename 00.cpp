#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

void solution()
{
    int x,y;
    cin >> x >> y;
    if(x == 0 || y == 0)
        cout << "0\n";
    else
    {
        ll sum = 0;
        while(x != 0 && y != 0)
        {
            sum += 4*(x*y);
            --x;
            --y;
        }
        cout << sum << "\n";
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