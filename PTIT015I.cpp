#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 1

void solution()
{
    int n,t;
    cin >> n >> t;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        if(sum <= t)
        {
            ++cnt;
        }
        else
        {
            break;
        }
    }
    cout << cnt << "\n";
}

int main()
{
    int t;
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