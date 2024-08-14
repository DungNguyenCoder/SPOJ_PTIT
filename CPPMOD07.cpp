#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 1

void solution()
{
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;
    for(int i = 0;i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    int res = 0;
    for(int i = 1; i <= a[n-1]; i++)
    {
        int d = a[0]%i;
        cnt = 0;
        for(int j = 1; j < n; j++)
        {
            if(a[j]%i == d)
                ++cnt;
            else
                break;
        }
        if(cnt == n-1)
            ++res;
    }
    if(n == 1)
        cout << 0 << "\n";
    else
        cout << res << "\n";
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