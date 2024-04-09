#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

int b[42];

void solution()
{
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
        int x = a[i] % 42;
        b[x] = 1;
    }
    int cnt = 0;
    for(int i = 0; i < 42; i++)
    {
        if(b[i] == 1)
            ++cnt;
    }
    cout << cnt;
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