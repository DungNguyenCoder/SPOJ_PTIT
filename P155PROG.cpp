#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int n;
    cin >> n;
    int a[n+5];
    int b[n+5];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]] = i;
    }
    for(int i = 1; i <= n; i++)
        cout << b[i] << " ";
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