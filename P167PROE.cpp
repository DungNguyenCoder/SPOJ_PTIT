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
    int m = 2*n-1;
    int cnt = 1;
    for(int i = m; i > n; i--)
    {
        if(1ll*i*n % (i-n) == 0)
            cnt += 2;
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