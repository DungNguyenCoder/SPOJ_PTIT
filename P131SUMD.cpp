#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
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

int max(int a)
{
    int b = 0;
    int tmp = a;
    while(a)
    {
        int x = a % 10;
        if(x == 5)
            x = 6;
        b = b * 10 + x;
        a /= 10;
    }
    b = tn(b);
    if(tmp % 10 == 0)
        b *= 10;
    return b;
}

int min(int a)
{
    int b = 0;
    int tmp = a;
    while(a)
    {
        int x = a % 10;
        if(x == 6)
            x = 5;
        b = b * 10 + x;
        a /= 10;
    }
    b = tn(b);
    if(tmp % 10 == 0)
        b *= 10;
    return b;
}

void solution()
{
    int a;
    int b;
    cin >> a >> b;
    int Max = max(a) + max(b);
    int Min = min(a) + min(b);
    cout << Min << " " << Max;
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