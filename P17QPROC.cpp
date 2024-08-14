#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define TEST 0
#define mx 10000005

int uoc[mx];

void sanguoc()
{
    for(int i = 1; i < mx; i++)
    {
        for(int j = i; j < mx; j += i)
        {
            uoc[j] += i;
        }
    }
}

void solution()
{
    int c, d;
    cin >> c >> d;
    ll res = 0;
    for(int i = c; i <= d; i++)
    {
        res += abs(i - (uoc[i] - i));
    }
    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    sanguoc();
    int t;
    if(TEST)    cin >> t;
    else        t = 1;
    while(t--)
    {
        solution();
    }
}