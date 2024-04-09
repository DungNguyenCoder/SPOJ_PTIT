#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 10000030
#define TEST 1

ll nt[mx + 5];

void sang()
{
    nt[0] = 1;
    nt[1] = 1;
    for(int i = 0; i * i <= mx; i++)
    {
        if(nt[i] == 0)
        {
            for(int j = i * i; j <= mx; j += i)
            {
                nt[j] = 1;
            }
        }
    }
}

void solution()
{
    ll n;
    cin >> n;
    for(int i = 2; i < 10000; i++)
    {
        if(nt[i] == 0 && i > n)
            break;
        if(nt[i] == 0)
            cout << i << " ";
    }
    cout << "\n";
}

int main()
{
    faster();
    int t;
    sang();
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