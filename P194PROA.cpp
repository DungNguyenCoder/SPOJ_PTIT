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
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int sum = a+b+c;
        if(sum >= 2)
            ++cnt;
    }
    cout << cnt;
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