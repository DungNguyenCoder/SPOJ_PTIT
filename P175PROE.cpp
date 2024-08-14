#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    string s;
    cin >> s;
    int n = s.size();
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += s[i] - '0';
    }
    if(sum < 10)
        cout << 1;
    else
    {
        int cnt = 1;
        int tong;
        while(sum >= 10)
        {
            ++cnt;
            tong = 0;
            while(sum > 0)
            {
                tong += sum%10;
                sum /= 10;
            }
            sum = tong;
        }
        cout << cnt;
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