#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    while(1)
    {
        string a;
        cin >> a;
        if(a == "0")
            break;
        int s = 0;
        int n = a.size();
        for(int i = 0; i < n; i++)
        {
            int x = a[i] -'0';
            if(x > 4)
                x--;
            s = s*9 + x;
        }
        cout << a << ": " << s << "\n";
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