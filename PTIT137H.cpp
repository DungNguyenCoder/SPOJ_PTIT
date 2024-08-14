#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

ll binpow2(ll a, ll b)
{
    ll res = 1;
    while(b != 0)
    {
        if(b % 2 == 1)
        {
            res %= 61;
            res *= a;
            res %= 61;
        }
        b %= 61;
        b /= 2;
        b %= 61;
        a %= 61;
        a *= a;
        a %= 61;
    }
    res %= 61;
    return res;
}

void solution()
{
    while(1)
    {
        string s;
        cin >> s;
        if(s == "end")
            break;
        int n = s.size();
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            char x = s[i];
            ll tmp;
            if(x >= '0' && x <= '9')
                tmp = x - '0';
            else if(x >= 'A' && x <= 'Z')
                tmp = x - 55;
            else if(x >= 'a' && x <= 'z')
                tmp = x - 61;
            sum += (tmp%61 * binpow2(62,n-1-i)%61)%61;
        }
        sum %= 61;
        if(sum == 0)
            cout << "yes\n";
        else
            cout << "no\n";
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