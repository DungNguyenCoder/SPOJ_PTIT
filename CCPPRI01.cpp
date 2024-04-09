#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 10000030
#define TEST 1

ll nt[mx + 5];
ll snt[mx + 5];

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
int x = 0;
void sangnt()
{
    for(int i = 2; i <= mx; i++)
    {
        if(nt[i] == 0)
            snt[++x] = i;
    }
}

void solution()
{
    ll n;
    cin >> n;
    int d = 0;
    int i = snt[++d];
    while(i <= sqrt(n))
    {
        while(n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        i = snt[++d];
    }
    if(n > 1)   cout << n << "\n";
}

int main()
{
    faster();
    int t;
    sang();
    sangnt();
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