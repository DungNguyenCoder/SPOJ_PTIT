#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 1

void solution()
{
    float a;
    cin >> a;
    float res = 2.0/(1.0-(a/180.0));
    int tmp = res;
    if(tmp*1000 == res*1000)
        cout << "YES\n";
    else
        cout << "NO\n";
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