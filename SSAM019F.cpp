#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

ll f[93];

void fibo()
{
    f[1] = 1;
    f[2] = 1;
    for(int i = 2; i < 93; i++)
        f[i] = f[i-1] + f[i-2];
}

void solution()
{
    int n;
    cin >> n;
    cout << f[n] << endl;
}

int main()
{
    faster();
    int t;
    fibo();
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