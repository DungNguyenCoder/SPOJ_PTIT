#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

int tn(int n)
{
    int rev = 0;
    while(n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

void solution()
{
    int a,b;
    cin >> a >> b;
    a = tn(a);
    b = tn(b);
    cout << max(a,b);
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