#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    int n;
    int x;
    cin >> n >> x;
    int a[n + 5];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    int max = 0;
    for(int i = 0; i < n - 2; i++)
    {
        for(int j = i + 1; j < n - 1; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
                sum = a[i] + a[j] + a[k];
                if(sum > max && sum <= x)
                    max = sum;
            }
        }
    }
    cout << max;
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