#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    while(1)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c == 0 && d == 0)
            break;
        int cnt = 0;
        while(a != b || b != c || c != d)
        {
            int x = abs(a-b);
            int y = abs(b-c);
            int z = abs(c-d);
            int t = abs(d-a);
            a = x;
            b = y;
            c = z;
            d = t;
            ++cnt;
        }
        cout << cnt << endl;
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