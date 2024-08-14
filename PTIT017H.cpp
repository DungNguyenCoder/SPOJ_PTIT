#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define mod 1000000007
#define TEST 1

inline void solution()
{
    ll n;
    cin >> n;
    ll sum = n+1;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0)
        {   
            sum += i + n/i;
        }
    }
    if(sqrt(n) == (float)sqrt(n))
        sum -= sqrt(n);
    ll sum2 = sum + 1;
    for(int i = 2; i <= sqrt(sum); i++)
    {
        if(sum%i == 0)
        {   
            sum2 += i + sum/i;
        }
    }
    if(sqrt(sum) == (float)sqrt(sum))
        sum2 -= sqrt(sum);
    // cout << sum << "  " << sum2;
    if(sum2 == 2*n)
        cout << "YES\n";
    else
        cout << "NO\n";
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