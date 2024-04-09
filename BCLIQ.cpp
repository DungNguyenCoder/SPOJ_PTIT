#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    int n;
    cin >> n;
    int a[n + 5];
    int b[n + 5];
    for(int i = 0; i < n;i++)
    {
        cin >> a[i];
        b[i] = 1;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i;j++)
        {
            if(a[i] > a[j])
            {
                b[i] = max(b[i], b[j] + 1);
            }
        }
    }
    int Max = -1;
    for(int i = 0; i < n; i++)
    {
        if(b[i] > Max)
            Max = b[i];
    }
    cout << Max;
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