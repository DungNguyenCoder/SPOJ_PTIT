#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    string s;
    cin >> s;
    int n;
    // if(s[0] == '-')
    //     n = s.size() - 1;
    // else
        n = s.size();
    if(n <= 19)
    {
        ll num = 0;
        // if(s[0] == '-')
        // {
        //     for(int i = 1; i <= n; i++)
        //         num = num*10 + s[i] - '0';
        //     if(num <= 128)
        //         cout << "byte";
        //     else if(num <= 32768)
        //         cout << "short";
        //     else if(num <= 2147483648)
        //         cout << "int";
        //     else if(num <= 9223372036854775808)
        //         cout << "long";
        //     else if(num > 9223372036854775808)
        //         cout << "BigInteger";
        // }
        // else
        {
            for(int i = 0; i < n; i++)
                num = num*10 + s[i] - '0';
            if(num <= 127)
                cout << "byte";
            else if(num <= 32767)
                cout << "short";
            else if(num <= 2147483647)
                cout << "int";
            else if(num <= 9223372036854775807)
                cout << "long";
            else if(num > 9223372036854775807)
                cout << "BigInteger";
        }
    }
    else
    {
        cout << "BigInteger";
    }
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