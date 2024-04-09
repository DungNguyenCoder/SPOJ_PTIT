#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

void solution()
{
    while(1)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0)
            break;
        if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b))
            cout << "right\n";
        else
            cout << "wrong\n";
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