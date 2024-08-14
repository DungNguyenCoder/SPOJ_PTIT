#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 10000000
#define mod 100000007
#define TEST 0

int snt[mx+5];
int nt[mx+5];

void init()
{
    for(int i = 1; i <= mx; i++)
    {
        snt[i] = 1;
        nt[i] = 0;
    }
    snt[1] = 0;
}

void sang()
{
    for(int i = 2; i <= sqrt(mx); i++)
    {
        if(snt[i] == 1)
        {
            for(int j = 2; j <= mx/i; j++)
            { 
                snt[i*j] = 0;
            }
        }
    }
}

void solution()
{
    vector<int> v;
    for(int i = 1; i <= mx; i++)
    {
        if(snt[i] == 1)
            v.push_back(i);
    }
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 1; j <= mx/v[i]; j++)
        {
            nt[v[i]*j]++;
        }
    }
    int t;
    cin >> t;
    for(int k = 1; k <= t; k++)
    {
        int a,b,l;
        cin >> a >> b >> l;
        int cnt = 0;
        for(int i = a; i <= b; i++)
        {
            if(nt[i] == l)
                ++cnt;
        }
        cout << "Case #" << k << ": " << cnt << "\n";
    }
}

int main()
{
    int t;
    init();
    sang();
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}