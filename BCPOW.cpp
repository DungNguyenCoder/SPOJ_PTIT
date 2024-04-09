#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

string cong(string a, string b)
{
    int len = max(a.size(), b.size());
    while(a.size() < len)
        a = "0" + a;
    while(b.size() < len)
        b = "0" + b;
    string ans = "";
    int rem = 0;
    for(int i = len-1; i >= 0; i--)
    {
        int n1 = a[i] - '0';
        int n2 = b[i] - '0';
        int s = n1 + n2 + rem;
        char tmp = s%10 + '0';
        ans = tmp + ans;
        rem = s/10;
    }
    if(rem != 0)
    {
        char tmp = rem + '0';
        return tmp + ans;
    }
    return ans;
}

string mu(string x, int n, int d)
{
    if(n == 0)  return "1";
    else if(n == 1) return x;
    string ans = x;
    for(int i = 2; i <= n; i++)
    {
        string tmp = ans;
        for(int j = 2; j <= d; j++)
        {
            ans = cong(ans,tmp);
        }
    }
    return ans;
}

inline void solution()
{
    int n,m;
    cin >> n >> m;
    string mu1 = mu("2",n,2);
    string mu2 = mu("3",m,3);
    string s = cong(mu1,mu2);
    cout << s[0];
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