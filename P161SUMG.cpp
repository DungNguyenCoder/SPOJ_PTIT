#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int sum = a+b+c+d+e;
    if(sum == 0)
        cout << -1;
    else
    {
        if(sum%5 == 0)
            cout << sum/5;
        else
            cout << -1;
    }
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